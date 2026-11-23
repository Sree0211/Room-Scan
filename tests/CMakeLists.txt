find_package(GTest CONFIG REQUIRED)

add_executable(RoomScanTests 
    test_cameraModel.cpp)

target_compile_features(RoomScanTests PRIVATE cxx_std_17)

target_link_libraries(RoomScanTests PRIVATE 
    GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(RoomScanTests)