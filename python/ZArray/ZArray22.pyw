from pt4 import *
def solve():
    task("ZArray22")
    n=get_int()
    a=[]
    for _ in range(n):
        a.append(get_float())
    k=get_int()
    l=get_int()
    
    ans=0.0
    for i in range(n):
        if k<=i<=l:
            continue
        ans+=a[i]
        print(a[i])
    put(ans)





start(solve)
