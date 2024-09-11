# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZMinmax4")
    mn=99999.00
    tag=-1
    n=get_int()
    for i in range(n):
        x=get_float()
        if x<mn:
            mn=x
            tag=i
    put(tag)
        





start(solve)
