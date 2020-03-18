cmake_minimum_required(VERSION 3.7)
project(QT3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
find_package(Qt5Widgets CONFIG REQUIRED)
add_executable(QT3 main.cpp class1.cpp)
target_link_libraries(QT3 Qt5::Widgets)