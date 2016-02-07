project(src)
cmake_minimum_required(VERSION 2.8)

# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Instruct CMake to run moc automatically when needed.
set(CMAKE_AUTOMOC ON)

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})
FIND_PACKAGE(Qt5Widgets)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
INSTALL_TARGETS(../bin ${PROJECT_NAME})
