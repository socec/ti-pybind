add_library(calc SHARED calculator.cpp)

add_executable(play play.cpp)
target_link_libraries(play calc)
