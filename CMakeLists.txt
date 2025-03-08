cmake_minimum_required(VERSION 3.30)
project(Ripetizioni_Alice C)

set(CMAKE_C_STANDARD 99)

add_library(Ripetizioni_Alice STATIC library.c
        src/selectionSort.c
        src/bubbleSort.c
        src/insertionSort.c)
