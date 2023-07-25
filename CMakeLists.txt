cmake_minimum_required(VERSION 3.24)
project(Chat_messenger_on_QT)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Chat_messenger_on_QT main.cpp)
target_link_libraries(Chat_messenger_on_QT
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

