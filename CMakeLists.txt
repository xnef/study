cmake_minimum_required (VERSION 3.5)

project(OOP LANGUAGES CXX)

set(HEADERS
        oop.hpp
	tests.hpp)

set(SOURCES
	main.cpp
	tests.cpp
        oop.cpp
        )



add_executable(OOP ${SOURCES} ${HEADERS})
set_target_properties(OOP PROPERTIES
	   
           CXX_STANDART 14
           CXX_STANDART_REQUIRED ON
           )
