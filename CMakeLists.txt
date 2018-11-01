cmake_minimum_required(VERSION 3.8)
project(my_app VERSION 6.2.1.7 LANGUAGES CXX)

LIST(APPEND CMAKE_PREFIX_PATH /home/jason/mysource/cmake_right/install )
find_package(FooLib CONFIG REQUIRED)


add_executable(app
  src/AppMain.cpp)

target_link_libraries(app FooLib::FooLib)