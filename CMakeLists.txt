cmake_minimum_required(VERSION 3.26)
project(TF)

set(CMAKE_CXX_STANDARD 17)

add_executable(TF main.cpp
        Nodo.h
        Lista_doble.h
        Cliente.h
        Reserva.h
        ItemCarta.h
        Carta.h)
