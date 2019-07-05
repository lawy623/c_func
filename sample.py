from sample_c import c_add

def test():
    print("I am testing the pybind function")
    y = c_add(1, 10)
    print("call c_add and result is", y)

if __name__=='__main__':
    test()
