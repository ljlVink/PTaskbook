from pt4 import *
def solve():
    task("ZArray34")
    n=get_int()
    a=[get_float() for _ in range(n)]*2
    ans=-9999.00
    a[n]=9999.00 # undefined !
    for i in range (n):
        if a[i-1]>a[i] and a[i]<a[i+1]:
            if a[i]>ans:
                ans=a[i]
            
    put(ans)

start(solve)
