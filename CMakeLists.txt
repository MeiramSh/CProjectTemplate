cmake_minimum_required(VERSION 3.13.4)	#	Yes
set(This CPT)
project(${This} C CXX)
add_executable(${PROJECT_NAME} main.c)

enable_testing()
add_subdirectory(libraries)
target_include_directories(${PROJECT_NAME} PUBLIC libraries)
target_link_directories(${PROJECT_NAME} PRIVATE libraries)
target_link_libraries(${PROJECT_NAME} function)
add_subdirectory(googletest)


add_subdirectory(tests)