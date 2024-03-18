#!/bin/bash

g++ -Wall -Werror -g -std=c++17 -I/home/server/app/protobuf/include -I/home/server/app/flatbuffers-v24.3.6/include  common.pb.cc pb_test.cc fbs_test.cc  main.cc -L/home/server/app/protobuf/lib64 -lprotobuf -lprotobuf-lite  -L/home/server/app/flatbuffers-v24.3.6/lib64 -lflatbuffers -o main
