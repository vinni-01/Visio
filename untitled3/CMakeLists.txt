cmake_minimum_required(VERSION 3.16)

project(untitled3 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 6.5 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.5)

qt_add_executable(appuntitled3
    main.cpp
)

qt_add_qml_module(appuntitled3
    URI untitled3
    VERSION 1.0
    QML_FILES Main.qml
    QML_FILES Icon.qml
    QML_FILES ExercisePage.qml
    SOURCES appengine.h appengine.cpp
    SOURCES timer.h timer.cpp
    RESOURCES ../../../Pics/Photo.jpg
    QML_FILES FirstPage.qml
    QML_FILES Calendar.qml
    RESOURCES Resources/ba.png Resources/eye.png Resources/Inter-Black.ttf Resources/Inter-Bold.ttf Resources/Inter-ExtraBold.ttf Resources/Inter-ExtraLight.ttf Resources/Inter-Light.ttf Resources/Inter-Medium.ttf Resources/Inter-Regular.ttf Resources/Inter-SemiBold.ttf Resources/Inter-Thin.ttf Resources/Logo.png Resources/PassionOne-Regular.ttf Resources/Poppins-Bold.ttf Resources/Poppins-Regular.ttf Resources/Poppins-SemiBold.ttf
    RESOURCES Resources/restart.png Resources/skip.png Resources/pause.png
    SOURCES networkengine.h networkengine.cpp
    SOURCES clock.h
    SOURCES clock.cpp
)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
set_target_properties(appuntitled3 PROPERTIES
#    MACOSX_BUNDLE_GUI_IDENTIFIER com.example.appuntitled3
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

target_link_libraries(appuntitled3
    PRIVATE Qt6::Quick
)

include(GNUInstallDirs)
install(TARGETS appuntitled3
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
