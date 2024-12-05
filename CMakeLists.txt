cmake_minimum_required(VERSION 3.27)
project(tamagotchi)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/home/samael/Qt/6.2.4/gcc_64")

find_package(
        Qt6
        COMPONENTS
        Core
        Gui
        UiTools
        Widgets
        REQUIRED
)

add_executable(
        tamagotchi
        main.cpp
        Tamagotchi.cpp
        Tamagotchi.h
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        gamewindow.cpp
        gamewindow.h
        gamewindow.ui
        assets/resources.qrc
)

target_link_libraries(
        tamagotchi
        Qt::Core
        Qt::Gui
        Qt::UiTools
        Qt::Widgets
)

