cd test
mkdir build
cd build

cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
bear --append -- make -j
