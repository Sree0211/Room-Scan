cmake_minimum_required(VERSION 3.31)
project(RoomScan VERSION 0.1.0 LANGUAGES CXX)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

include(CTest)

find_package(Eigen3 CONFIG REQUIRED)
find_package(OpenCV CONFIG REQUIRED COMPONENTS 
    core
    imgproc
    calib3d)
find_package(Ceres CONFIG REQUIRED)

add_executable(RoomScan 
    apps/main.cpp)

target_compile_features(RoomScan PRIVATE cxx_std_17)

set_target_properties(RoomScan PROPERTIES
    CXX_EXTENSIONS OFF
)

target_link_libraries(RoomScan PRIVATE
    Eigen3::Eigen 
    ${OpenCV_LIBS}
    Ceres::ceres 
)

if(BUILD_TESTING)
    add_subdirectory(tests)
endif()