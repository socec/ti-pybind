#include <calculator.h>

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

PYBIND11_MODULE(calculator, m) {
    m.doc() = "My calculator module";
    py::class_<Calculator>(m, "Calculator")
        .def(py::init<>())
        .def("add",
            py::overload_cast<int64_t, int64_t>(&Calculator::add),
            py::arg("first"), py::arg("second"))
        .def("add",
            py::overload_cast<std::vector<int64_t>>(&Calculator::add),
            py::arg("numbers"))
        .def("multiply",
            py::overload_cast<int64_t, int64_t>(&Calculator::multiply),
            py::arg("first"), py::arg("second"))
        .def("multiply",
            py::overload_cast<std::vector<int64_t>>(&Calculator::multiply),
            py::arg("numbers"))
    ;
}
