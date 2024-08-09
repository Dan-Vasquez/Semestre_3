cmake_minimum_required(VERSION 3.21)
project(Figuras_geometricas)

set(CMAKE_CXX_STANDARD 14)

add_executable(Figuras_geometricas main.cpp Cuadrado.cpp Cuadrado.h Circulo.cpp Circulo.h Rectangulo.cpp Rectangulo.h Figuras.cpp Figuras.h Data.cpp Data.h)
