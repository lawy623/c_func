# c_func
pybind11 simple example (In python 3.5)

## usage
Clone and go into internal `c_func` folder, run `pip3 install .`. Then run `python3 sample.py` for python code.

## make with extent lib
When you include some LIB that need the link of other LIB, you can follow this [issue](https://github.com/pybind/pybind11/issues/387), and add something like `target_link_libraries(c_lib PRIVATE ${YOUR_LIBRARIES})`
