cmake_minimum_required(VERSION 3.24)
project(messenger_server)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Network
        REQUIRED)

add_executable(messenger_server main.cpp src/Server/Server.h src/Server/Server.cpp)
target_link_libraries(messenger_server
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt6::Network
        )