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
#ifndef GENERAL_H_
#define GENERAL_H_

#include <chrono>
#include <cstdint>
#include <string>

class GeneralData {
 public:
  GeneralData();
  GeneralData(const GeneralData &) = default;
  GeneralData(GeneralData &&) = delete;
  GeneralData &operator=(const GeneralData &) = default;
  GeneralData &operator=(GeneralData &&) = delete;
  ~GeneralData();

  bool get_bool_data();
  int32_t get_int_data();
  int64_t get_long_data();
  float get_float_data();
  double get_double_data();
  std::string get_string_data();
  std::string get_bytes_data();
  std::string get_key_prefix();
  int32_t get_key_prefix_index();

 protected:
 private:
  bool bool_data = BOOL_DATA_START;
  int32_t int_data = INT_DATA_START;
  int64_t long_data = LONG_DATA_START;
  float float_data = FLOAT_DATA_START;
  double double_data = DOUBLE_DATA_START;
  std::string string_data = STRING_DATA_START;
  std::string bytes_data = BYTE_DATA_START;
  std::string key_prefix = "key";
  int32_t string_data_index = 0;
  int32_t bytes_data_index = 0;
  int32_t key_prefix_index = 0;

  static inline bool BOOL_DATA_START = true;
  static inline int32_t INT_DATA_START = 123456;
  static inline int64_t LONG_DATA_START = 0x00000000FFFFFFFF;
  static inline float FLOAT_DATA_START = 0.23f;
  static inline double DOUBLE_DATA_START = 1234567890.89f;
  static inline std::string STRING_DATA_START =
      "source and configuration filesObject form shall mean any form resulting "
      "from mechanical transformation or translation of a Source form "
      "including "
      "but not limited to compiled object code generated document ationand "
      "conversions to other media typesWork shall mean the work of authorship "
      "whether in Source orObject form made available under the License as "
      "indicated by a copyright notice that is included in or attached to the "
      "work an example is provided in the Appendix below Derivative Works "
      "shall "
      "mean any work whether in Source or Object form that is based on or "
      "derived from the Work and for which the editorial revisions annotations "
      "elaborations or other modifications represent as a whole an original "
      "work of authorship. For the purposes of this License Derivative Works "
      "shall not include works that remains from or merely link or "
      "bind by name to the interfaces of the Work and Derivative Works "
      "thereof.Contribution shall mean any work of authorship including the "
      "original version of the Work and any modifications or additions to that "
      "Work or Derivative Works thereof that is intentionally submitted to "
      "Licensor for inclusion in the Work by the copyright owner or by an "
      "individual or Legal Entity authorized to submit on behalf of the "
      "copyright owner. For the purposes of this definition submitted "
      "source and configuration filesObject form shall mean any form resulting "
      "from mechanical transformation or translation of a Source form "
      "including "
      "but not limited to compiled object code generated document ationand "
      "conversions to other media typesWork shall mean the work of authorship "
      "whether in Source orObject form made available under the License as "
      "indicated by a copyright notice that is included in or attached to the "
      "work an example is provided in the Appendix below Derivative Works "
      "shall "
      "mean any work whether in Source or Object form that is based on or "
      "derived from the Work and for which the editorial revisions annotations "
      "elaborations or other modifications represent as a whole an original "
      "work of authorship. For the purposes of t ";

  static inline std::string BYTE_DATA_START =
      "0004dd06264635f696c6e650a742020202020200004de020202020202020202020202020"
      "202020004df07b245944414e494d5f43494c7d420a29004e00610a6464735f6275696465"
      "727463726f004e10287972732f636473296b0a0a66694228004e204955444c535f4b4445"
      "5f4158504d454c004e300a2920202020656d7373676128655453004e4054415355222075"
      "426c6920646473206b004e5078656d616c7022650a29202020206461004e605f64757364"
      "62726963656f7479727328004e706372652f6178706d656c0a296e656964004e8028660a"
      "29690a286655424c495f444e55004e905449545f534553540a2920202020656d004ea073"
      "736761286554535441535522207542004eb06c6920646e7574697420736522740a29004e"
      "c02020202064615f647573646272696365004ed06f747972742873652f746e757469745f"
      "004ee073652974650a646e666929280a0a6669004ef042284955444c495f544e47454152"
      "4954004f004e4f545f534553540a2920202020656d004f10737367612865545354415355"
      "22207542004f206c6920646e696574726774616f69206e004f30657474732922200a2020"
      "61206464735f004f406275696465727463726f287965747473004f50692f746e67656172"
      "69746e6f745f736504f602974650a646e666929280a0a66694228004f704955444c425f4"
      "e454843414d4b520a29004f8020202020656d73736761286554535441004f90535522207"
      "5426c6920646562636e6d68004fa07261226b0a292020202064615f647573004fb064627"
      "26963656f74797273286372622f004fc06e656863616d6b720a296e6569642866004fd00"
      "a29690a286655424c495f4459504854004fe04e4f535f4b440a2920202020656d7373004"
      "ff067612865545354415355222075426c690050002064797068746e6f73206b642922200"
      "a005010202061206464735f6275696465727463005020726f287972732f6379706473296"
      "b650a"
      "0004dd06264635f696c6e650a742020202020200004de020202020202020202020202020"
      "202020004df07b245944414e494d5f43494c7d420a29004e00610a6464735f6275696465"
      "727463726f004e10287972732f636473296b0a0a66694228004e204955444c535f4b4445"
      "5f4158504d454c004e300a2920202020656d7373676128655453004e4054415355222075"
      "426c6920646473206b004e5078656d616c7022650a29202020206461004e605f64757364"
      "62726963656f7479727328004e706372652f6178706d656c0a296e656964004e8028660a"
      "29690a286655424c495f444e55004e905449545f534553540a2920202020656d004ea073"
      "736761286554535441535522207542004eb06c6920646e7574697420736522740a29004"
      "e736761286554535441535522201";
};

class TimeDiff {
 public:
  TimeDiff();
  ~TimeDiff();
  int64_t GetDiff();

 private:
  std::chrono::time_point<std::chrono::steady_clock, std::chrono::nanoseconds>
      start;

  std::chrono::time_point<std::chrono::steady_clock, std::chrono::nanoseconds>
      end;
};

#endif  // GENERAL_H_
