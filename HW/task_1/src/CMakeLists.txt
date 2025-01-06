cmake_minimum_required(VERSION 3.30)

add_executable(task_1 main.cpp ${TASK_INCLUDE_DIR}/operation.h operation.cpp)
target_include_directories(task_1 PUBLIC ${TASK_INCLUDE_DIR})