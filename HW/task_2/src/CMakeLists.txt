cmake_minimum_required(VERSION 3.30)

add_executable(task_2 main.cpp
        cpu.cpp
        ${TASK2_INCLUDE_DIR}/cpu.h
        ram.cpp
        ${TASK2_INCLUDE_DIR}/ram.h
        gpu.cpp
        ${TASK2_INCLUDE_DIR}/gpu.h
        disk.cpp
        ${TASK2_INCLUDE_DIR}/disk.h
        kbd.cpp
        ${TASK2_INCLUDE_DIR}/kbd.h)

target_include_directories(task_2 PUBLIC ${TASK2_INCLUDE_DIR})