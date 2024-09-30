from pt4 import *
def solve():
    task("ZArray60")
    n=get_int()
    a=[get_float() for _ in range(n)]
    b=[0]*n
    b[n-1]=a[n-1]
    for i in range(n-2,-1,-1):
        b[i] = a[i]+b[i+1]
        
    for i in b:
        put(i)





start(solve)
