set(MODULE1_SOURCE_FILES src/library.cpp src/checkout.cpp)

add_library(module1 STATIC ${MODULE1_SOURCE_FILES})
target_include_directories(module1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

#### TESTING
enable_testing()
set(MODULE1_TEST_FILES ${CMAKE_CURRENT_SOURCE_DIR}/tests/main.cpp tests/checkout_test.cpp)
add_executable(module1_test_runner ${MODULE1_TEST_FILES} ${MODULE1_SOURCE_FILES})

find_package(GTest CONFIG REQUIRED)
target_link_libraries(module1_test_runner PRIVATE GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main pthread)