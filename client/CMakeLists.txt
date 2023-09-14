cmake_minimum_required(VERSION 3.24)
project(chat_messenger_client)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(chat_messenger_client main.cpp src/cpp/main_window.cpp src/include/main_window.h src/include/ui/ui_GUI_ChatMessenger.h)
target_link_libraries(chat_messenger_client
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )

