# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZSeries18")
    n=get_int()
    pre=-1
    for _ in range(n):
        x=get_int()
        if pre==x:continue
        put(x)
        pre=x





start(solve)
