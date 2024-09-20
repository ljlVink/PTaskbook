# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZSeries20")
    n,lst=get2()
    k=0
    for _ in range(n-1):
        x=get_int()
        if lst < x:
            put(lst)
            k += 1
        lst=x
    put(k)
start(solve)
