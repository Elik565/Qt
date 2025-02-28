cmake_minimum_required(VERSION 3.16)
project(QtApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets)  # находим Qt

# MOC (Meta-Object Compiler) - это инструмент, который генерирует C++ код для поддержки механизмов Qt. Когда компилятор видит Q_OBJECT в классе, CMake вызывает moc, который создает дополнительный .cpp файл (например, moc_mainwindow.cpp). Этот файл добавляется в сборку и обеспечивает работу Qt-механизмов.
set(CMAKE_AUTOMOC ON)  # генерация moc-файлов

# UI-файл — это XML-файл, который описывает графический интерфейс пользователя (UI) приложения. Он создается с помощью Qt Designer и содержит информацию о расположении и свойствах виджетов, таких как кнопки, текстовые поля, метки и другие элементы интерфейса.
set(CMAKE_AUTOUIC ON)  # генерация ui файлов

add_executable(QtApp main.cpp main_window.cpp)

target_link_libraries(QtApp PRIVATE Qt6::Widgets)  # подключаем библиотеки Qt

