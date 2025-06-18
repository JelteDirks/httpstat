cmake_minimum_required(VERSION 3.10)

project(RandomHttp
  LANGUAGES CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_executable(randomhttp 
  src/main.cpp
  src/LineReader.cpp)

target_include_directories(randomhttp
  PUBLIC "./include")
