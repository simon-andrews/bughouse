add_executable(bughouse-server
    main.cpp)

target_include_directories(bughouse-server PRIVATE ../libbughouse/include)
target_link_libraries(bughouse-server bughouse)
