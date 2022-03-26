cmake_minimum_required(VERSION 3.10)

# set the project name
project(test)

# add the executable
add_executable(test CustomArenaJoin.cpp)
get_filename_component(PARENT_DIR ../ ABSOLUTE)
get_filename_component(PP_PARENT_DIR ../../../ ABSOLUTE)
get_filename_component(PPP_PARENT_DIR ../../../../ ABSOLUTE)
include_directories(${PARENT_DIR}/Battlegrounds)
include_directories(${PP_PARENT_DIR}/common)
include_directories(${PP_PARENT_DIR}/server/shared/DataStores/)
include_directories(${PP_PARENT_DIR}/common/Debugging/)
include_directories(${PP_PARENT_DIR}/server/game/Entities/Object/)
include_directories(${PP_PARENT_DIR}/server/shared/Packets/)
include_directories(${PP_PARENT_DIR}/common/Utilities/)
include_directories(${PP_PARENT_DIR}/server/shared/)


