cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
project(itForChildren)


add_executable(itForChildren src/main.cpp src/BufferedAsyncSerial.cpp src/AsyncSerial.cpp src/readsettingfile.cpp)

target_link_libraries(itForChildren PRIVATE boost_system pthread)