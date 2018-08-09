project("libbughouse")

add_library(bughouse
    BitBoard.cpp
    Board.cpp
    Piece.cpp)

target_include_directories(bughouse PRIVATE include)
