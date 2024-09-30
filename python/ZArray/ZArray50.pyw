from pt4 import *
def solve():
    task("ZArray50")

    n=get_int()
    ans=0
    a=[get_int()for _ in range(n)]
    for i in range(n):
        for j in range (n):
            if i<j and a[i]>a[j]:
                ans += 1
    put(ans)




start(solve)
