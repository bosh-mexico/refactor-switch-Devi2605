cmake_minimum_required(VERSION 3.10)
project(PaymentApp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Main executable
add_executable(paymentApp main.cpp Payment.cpp)

# Enable testing
enable_testing()

# Find GoogleTest
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})

# Unit test executable
add_executable(test_checkout test_checkout.cpp Payment.cpp)

# Link GoogleTest and pthread
target_link_libraries(test_checkout ${GTEST_LIBRARIES} pthread)

# Register the tests with CTest
add_test(NAME CheckoutTests COMMAND test_checkout)
