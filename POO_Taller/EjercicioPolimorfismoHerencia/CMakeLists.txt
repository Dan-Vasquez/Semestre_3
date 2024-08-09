cmake_minimum_required(VERSION 3.21)
project(EjercicioPolimorfismoHerencia)

set(CMAKE_CXX_STANDARD 14)

add_executable(EjercicioPolimorfismoHerencia main.cpp Employee.cpp Employee.h Salaried_Employee.cpp Salaried_Employee.h Hourly_Employee.cpp Hourly_Employee.h Commission_Employee.cpp Commission_Employee.h BasePlus_Commission_Employee.cpp BasePlus_Commission_Employee.h Daily_Employee.cpp Daily_Employee.h)
