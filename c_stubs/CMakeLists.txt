cmake_minimum_required(VERSION 3.0)
project(recognitionLib)                 # create a project with the given name
add_library(recognition SHARED recognition.cpp recognition_wrap.cxx)   # compile "xxx.cpp" and create a SHARED library called "xxx"
#add_executable(example example.cpp)           # compile "example.cpp" the the executable called "example"
include (GenerateExportHeader)          
find_package( OpenCV REQUIRED )
GENERATE_EXPORT_HEADER(recognition           # generates the export header shared_EXPORTS.h automatically
    BASE_NAME recognition
    EXPORT_MACRO_NAME recognition_EXPORTS
    EXPORT_FILE_NAME recognition_EXPORTS.h
    STATIC_DEFINE SHARED_EXPORTS_BUILT_AS_STATIC)
#target_link_libraries(example recognition)      # link our previously created shared library to the exectable
target_link_libraries(recognition ${OpenCV_LIBS})      # link our previously created shared library to the exectable
