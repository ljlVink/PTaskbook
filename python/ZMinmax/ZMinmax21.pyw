# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZMinmax21")
    n=get_int()
    mx=-9999.00
    mn=9999.00
    ans=0.0
    for _ in range(n):
        x=get_float()
        if x>mx:mx=x
        if x<mn:mn=x
        ans+=x
    ans -= mx
    ans -= mn
    ans = ans/(n-2)
    put(ans)


start(solve)
