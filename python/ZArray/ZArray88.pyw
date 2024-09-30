from pt4 import *
def solve():
    task("ZArray88")
    n=get_int()
    flag=False
    a=[get_float() for _ in range(n)]
    for i in range(n-1):
        if a[n-1]<a[i] and not flag:
            put(a[n-1])
            flag=True
        put(a[i])
        
            
        
    





start(solve)
