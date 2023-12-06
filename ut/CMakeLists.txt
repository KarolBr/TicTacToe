

SET(UT_SRCS
	project-test.cpp
)



add_executable(${CMAKE_PROJECT_NAME}_test ${UT_SRCS}) 
target_link_libraries(${CMAKE_PROJECT_NAME}_test gtest gtest_main ${CMAKE_PROJECT_NAME}_LIB)
##