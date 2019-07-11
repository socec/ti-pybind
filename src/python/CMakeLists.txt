pybind11_add_module(calculator calculator.cpp)

target_link_libraries(calculator PUBLIC calc)
