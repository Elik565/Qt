cmake_minimum_required(VERSION 3.16)  # указывает минимально необходимую версию Cmake
project(MyProject)  # создает проект с именем MyProject. Это название не влияет на сборку, но может использоваться внутри CMake

set(CMAKE_CXX_STANDARD 17)  # указывает, что мы используем C++17
set(CMAKE_CXX_STANDARD_REQUIRED ON)  # требует строгое соответствие стандарту

# Статическая библиотека встраивается в исполняемый файл во время компиляции
add_library(math_lib STATIC math.cpp)  # создаем статическую библиотеку

add_executable(my_program main.cpp utils.cpp)  # создает исполняемый файл my_program

target_link_libraries(my_program PRIVATE math_lib)  # подключаем статическую библиотеку

# Дальше пишем 'cmake -B build'. CMake считывает CMakeLists.txt, создает папку build и генерирует файлы сборки (Makefile).
# 'cmake --build build'. Собирает проект, используя сгенерированные файлы.
