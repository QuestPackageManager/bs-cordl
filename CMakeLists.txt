cmake_minimum_required(VERSION 3.25)

include(${CMAKE_CURRENT_LIST_DIR}/cmake/quest.cmake)

project(bs-cordl VERSION ${PACKAGE_VERSION})

set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED 20)

add_compile_options(
    -frtti
    -fPIE
    -fPIC
    -fexceptions
    -fdeclspec
    -O3
    -fpack-struct=8
    -DANDROID
    -DNO_CODEGEN_USE
    -DNO_CODEGEN_WRAPPERS
)

file(GLOB_RECURSE headers ${CMAKE_CURRENT_LIST_DIR}/include/*.hpp)
set(namespace_headers "")
foreach (file_path in ${headers})
    cmake_path(GET file_path FILENAME file_name)
    cmake_path(REMOVE_EXTENSION file_name)

    cmake_path(GET file_path PARENT_PATH parent_path)
    cmake_path(GET parent_path STEM directory)

    # namespace includes are files that are named like ../foldername/foldername.hpp
    string(COMPARE EQUAL "${file_name}" "${directory}" is_ns_include)
    if (is_ns_include)
        cmake_path(RELATIVE_PATH file_path BASE_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}/include")
        list(APPEND namespace_headers "${file_path}")
    endif()
endforeach()

set(${main_content} "")
string(APPEND main_content "#pragma once\n")


add_library(${CMAKE_PROJECT_NAME} SHARED)
foreach(file_path IN LISTS namespace_headers)
    cmake_path(REPLACE_EXTENSION file_path "cpp" OUTPUT_VARIABLE src_file_path)

    file(GENERATE OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/include/${src_file_path}" CONTENT "#include \"beatsaber-hook/shared/utils/typedefs.h\"\n#include \"${file_path}\"\n")
    target_sources(${CMAKE_PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_BINARY_DIR}/include/${src_file_path}")
    # target_precompile_headers(${CMAKE_PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_LIST_DIR}/include/${file_path}")
endforeach()

target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include)
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR}/extern/includes)
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE SYSTEM ${CMAKE_CURRENT_LIST_DIR}/extern/includes/libil2cpp/il2cpp/libil2cpp)
