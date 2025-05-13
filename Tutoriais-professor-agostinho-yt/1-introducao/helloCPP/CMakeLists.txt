cmake_minimum_required(VERSION 3.16)

project(helloCPP LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(helloCPP main.cpp
    funcao1.cpp
    funcao1.hpp
    funcao2.cpp
    funcao2.hpp)

include(GNUInstallDirs)
install(TARGETS helloCPP
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
