cmake_minimum_required(VERSION 3.8.0)
project(pwd-program VERSION 0.1.0)


include(CTest)
enable_testing()

add_executable(pwd-program main.cpp generator.cpp generator.h interface.cpp interface.h 
                    password.cpp password.h saver.h saver.cpp validator.h validator.cpp)

target_compile_features(pwd-program PUBLIC cxx_std_17)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
