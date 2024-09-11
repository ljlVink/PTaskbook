# Do NOT use lists and arrays!
from pt4 import *
def Sign(X:float):
    if X<0:
        return -1
    if X==0:
        return 0
    if X>0:
        return 1
def solve():
    task("ZFunc1")
    x=get_float()
    y=get_float()
    put(Sign(x)+Sign(y))
start(solve)
