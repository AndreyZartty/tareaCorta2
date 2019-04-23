cmake_minimum_required(VERSION 3.13)
project(tareaCorta2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(tareaCorta2
        Agenda.cpp
        Agenda.h
        LineaDeProceso.cpp
        LineaDeProceso.h
        main.cpp
        Proceso.cpp
        Proceso.h
        README.md List.cpp List.h Node.cpp Node.h)
