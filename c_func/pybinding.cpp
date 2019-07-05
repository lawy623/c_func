#include <pybind11/pybind11.h>
#include "mapping.h"
namespace py = pybind11;


PYBIND11_MODULE(sample_c, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring
    m.def("project_pc_2d_as_sparse_depth", &project_pc_2d_as_sparse_depth, py::return_value_policy::reference);
    m.def("c_add", &c_add, py::return_value_policy::reference);
}
