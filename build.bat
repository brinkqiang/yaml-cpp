
rem - clone code
rem git clone https://github.com/brinkqiang/yaml-cpp.git
rem pushd yaml-cpp
rem git submodule update --init --recursive
pip install pyyaml
rmdir /S /Q build
mkdir build
pushd build
cmake -A x64 -DCMAKE_BUILD_TYPE=relwithdebinfo ..
cmake --build .
popd

rem pause