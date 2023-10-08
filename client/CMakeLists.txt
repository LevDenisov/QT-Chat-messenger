cmake_minimum_required(VERSION 3.24)
project(messenger_client)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

find_package(Qt6 REQUIRED COMPONENTS Network)

add_executable(messenger_client main.cpp src/MessengerWindow/ui/ui_GUI_ChatMessenger.h src/MessengerWindow/MessengerWindow.h src/MessengerWindow/MessengerWindow.cpp src/User/User.h src/User/User.cpp src/AuthorizationWindow/AuthorizationWindow.cpp src/AuthorizationWindow/AuthorizationWindow.h src/ServerCommunication/ServerCommunication.cpp src/ServerCommunication/ServerCommunication.h)
target_link_libraries(messenger_client
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt6::Network
        )

