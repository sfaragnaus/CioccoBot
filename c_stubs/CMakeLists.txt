cmake_minimum_required(VERSION 3.0)
project(recognitionLib)                 # create a project with the given name
add_library(recognition SHARED recognition.cpp)   # compile "xxx.cpp" and create a SHARED library called "xxx"
add_executable(test test.cpp)           # compile "test.cpp" the the executable called "test"
include (GenerateExportHeader)          
GENERATE_EXPORT_HEADER(recognition           # generates the export header shared_EXPORTS.h automatically
    BASE_NAME recognition
    EXPORT_MACRO_NAME recognition_EXPORTS
    EXPORT_FILE_NAME recognition_EXPORTS.h
    STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC)
target_link_libraries(test recognition)      # link our previously created shared library to the exectable
