// Copyright (c) 2023 dingodb.com, Inc. All Rights Reserved
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <google/protobuf/descriptor.h>
#include <google/protobuf/descriptor.pb.h>
#include <google/protobuf/dynamic_message.h>

#include <iostream>

using namespace std;
using namespace google::protobuf;

void pb_create() {
  FileDescriptorProto file_proto;
  file_proto.set_name("foo.proto");

  // create dynamic message proto names "Pair"
  DescriptorProto *message_proto = file_proto.add_message_type();
  message_proto->set_name("Pair");

  FieldDescriptorProto *field_proto = NULL;

  field_proto = message_proto->add_field();
  field_proto->set_name("key");
  field_proto->set_type(FieldDescriptorProto::TYPE_STRING);
  field_proto->set_number(1);
  field_proto->set_label(FieldDescriptorProto::LABEL_REQUIRED);

  field_proto = message_proto->add_field();
  field_proto->set_name("value");
  field_proto->set_type(FieldDescriptorProto::TYPE_UINT32);
  field_proto->set_number(2);
  field_proto->set_label(FieldDescriptorProto::LABEL_REQUIRED);

  // add the "Pair" message proto to file proto and build it
  DescriptorPool pool;
  const FileDescriptor *file_descriptor = pool.BuildFile(file_proto);
  const Descriptor *descriptor = file_descriptor->FindMessageTypeByName("Pair");
  cout << descriptor->DebugString();

  // build a dynamic message by "Pair" proto
  DynamicMessageFactory factory(&pool);
  const Message *message = factory.GetPrototype(descriptor);
  // create a real instance of "Pair"
  Message *pair = message->New();

  // write the "Pair" instance by reflection
  const Reflection *reflection = pair->GetReflection();
  const FieldDescriptor *field = NULL;
  field = descriptor->FindFieldByName("key");
  reflection->SetString(pair, field, "my key");
  field = descriptor->FindFieldByName("value");
  reflection->SetUInt32(pair, field, 1234);

  cout << pair->DebugString();
  delete pair;
}