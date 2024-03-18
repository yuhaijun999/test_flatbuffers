cd test
mkdir build
cd build

cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
bear --append -- make -j


debug:
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON -DCMAKE_BUILD_TYPE=Debug ..
bear --append -- make -j

用法:
# 默认 all(pb, fbs) 100 次循环  数组长度为10 全部字段 测试
./main

还可以这样
# all 1000 次循环  数组长度为1 测试字段为 bool int long float double string bytes
./main all 1000 1 bool int long float double string bytes

或者这样也可以
./main all 1000 1 int double string
./main pb 1000 1 int double string
./main fbs 1000 1 int double string


参考：
/home/server/source/flatbuffers-24.3.6/tests
vim test.cpp +234

 222   flatbuffers::FlatBufferBuilder fbb;


 232   // union values.
 233   std::vector<flatbuffers::Offset<void>> characters;
 234
characters.push_back(fbb.CreateStruct(BookReader(/*books_read=*/7)).Union());
 235   characters.push_back(CreateAttacker(fbb,
/*sword_attack_damage=*/5).Union());
 236
characters.push_back(fbb.CreateStruct(BookReader(/*books_read=*/2)).Union());
 237   characters.push_back(fbb.CreateString("Other").Union());
 238   characters.push_back(fbb.CreateString("Unused").Union());
