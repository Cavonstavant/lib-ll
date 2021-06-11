cmake_minimum_required(VERSION 3.0.0)
project(ll VERSION 0.1.0)

add_library(ll
src/node/CRUD/create.c
src/node/CRUD/delete.c
src/node/CRUD/read.c
src/node/CRUD/update.c
src/node/cmp_node.c
src/list/CRUD/create.c
src/list/CRUD/delete.c
src/list/CRUD/update.c
)


include_directories(include)
