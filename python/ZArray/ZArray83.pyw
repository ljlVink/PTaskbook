from pt4 import *
def solve():
    task("ZArray83")
    n=get_int()
    a=[get_float() for i in range(n)]
    put(a[n-1])
    for i in range(0,n-1):
        put(a[i])







start(solve)
