
cmake_minimum_required(VERSION 3.22)

#set(ProjectName TicTacToe)

project(TicTacToe VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
#add_compile_options(-Wall -Wextra -pedantic -Werror)


include_directories(
    include
)


include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG main
)



FetchContent_MakeAvailable(googletest)

add_subdirectory(configured)
add_subdirectory(src)
add_subdirectory(app)
add_subdirectory(ut)



enable_testing()
##



#include_directories(
#    include
#)





#add_executable(${CMAKE_PROJECT_NAME}_test ${UT_SRCS}) 
#target_link_libraries(${CMAKE_PROJECT_NAME}_test gtest gtest_main ${CMAKE_PROJECT_NAME}_LIB)
##



include(GoogleTest)
#gtest_discover_tests(hello_test)
