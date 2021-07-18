cmake_minimum_required(VERSION 3.0.0)
project(ll VERSION 0.1.0)

enable_testing()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY tests/bin)

set(SRC 
src/node/CRUD/create.c
src/node/CRUD/delete.c
src/node/CRUD/read.c
src/node/CRUD/update.c
src/node/cmp_node.c
src/list/CRUD/create.c
src/list/CRUD/read.c
src/list/CRUD/delete.c
src/list/CRUD/update.c
src/queue/queue.c
src/stack/stack.c)

set(TEST_SRC
tests/list/CRUD/create.c
tests/list/CRUD/read.c
tests/list/CRUD/update.c)

add_library(ll ${SRC})

foreach(src_file ${TEST_SRC})
    get_filename_component(file_name ${src_file} NAME_WE)
    add_executable(${file_name} ${src_file})
    add_test(${file_name} ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${file_name})
    target_link_libraries(${file_name} criterion ll)
endforeach()
    

include_directories(include)
