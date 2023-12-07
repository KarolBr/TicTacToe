SET(MAIN
    main.cpp
)




add_executable(${CMAKE_PROJECT_NAME} ${MAIN} ${SRCS})

target_link_libraries(${CMAKE_PROJECT_NAME} PUBLIC ${CMAKE_PROJECT_NAME}_LIB)

target_include_directories(${CMAKE_PROJECT_NAME}_LIB PUBLIC 
    "../include"
    "${CMAKE_BINARY_DIR}/configured_files/include")


#add_executable(${CMAKE_PROJECT_NAME} ${SRCS})
