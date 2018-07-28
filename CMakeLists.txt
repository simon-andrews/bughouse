project("bughouse-engine")

add_library(bughouse
    BitBoard.cpp
    Board.cpp)

add_executable(bughouse-server
    main.cpp)

target_link_libraries(bughouse-server bughouse)
