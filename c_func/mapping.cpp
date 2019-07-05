#include "mapping.h"
#include <iostream>

Eigen::MatrixXf project_pc_2d_as_sparse_depth(const py::EigenDRef<MatrixXf> pc_2ds,
                                       const py::EigenDRef<MatrixXf> pc_3ds,
                                       int img_width,  int img_height) {
    // project pc as sparse depth
    Eigen::MatrixXf sparse_depth = Eigen::MatrixXf::Zero(img_height, img_width);
    for (int i = 0; i < pc_2ds.rows(); ++i) {
        int x = int(pc_2ds(i, 0));
        int y = int(pc_2ds(i, 1));
        if (x >= 0 && x < img_width && y >= 0 && y < img_height && pc_3ds(i, 0) > 0 && (sparse_depth(y, x) == 0 || pc_3ds(i, 0) < sparse_depth(y, x))) {
            sparse_depth(y, x) = pc_3ds(i, 0);
        }
    }
    return sparse_depth;
}

int c_add(int i, int j) {
    return i + j;
}
