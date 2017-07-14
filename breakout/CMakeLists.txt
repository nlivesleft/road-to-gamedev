project(breakout)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIRS})
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(breakout ${SOURCE_FILES})
target_link_libraries(breakout ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARIES})
