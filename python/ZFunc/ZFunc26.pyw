# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZFunc26")
    for _ in range(3):
        x1=get_float()
        y1=get_float()
        x2=get_float()
        y2=get_float()
        put(2*(abs(x1-x2)+abs(y1-y2)))
        put(abs(x1-x2)*abs(y1-y2))



start(solve)
