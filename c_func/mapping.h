#ifndef MAPPING_H
#define MAPPING_H

#include <pybind11/eigen.h>
#include <pybind11/stl.h>
#include <vector>
using namespace Eigen;
using namespace std;
namespace py = pybind11;

Eigen::MatrixXf project_pc_2d_as_sparse_depth(const py::EigenDRef<MatrixXf> pc_2ds,
                                       const py::EigenDRef<MatrixXf> pc_3ds,
                                       int img_width, int img_height);

int c_add(int i, int j);

#endif
