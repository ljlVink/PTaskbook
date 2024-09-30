from pt4 import *
def solve():
    task("ZArray4")
    n,a,r=(get3())
    put(a)
    for _ in range(n-1):
        a *= r
        put(a)







start(solve)
