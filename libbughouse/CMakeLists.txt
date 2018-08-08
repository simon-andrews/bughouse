project("libbughouse")

add_library(bughouse
    BitBoard.cpp
    Board.cpp)

target_include_directories(bughouse PRIVATE include)
