# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZFunc27")
    for _ in range(5):
        cnt=0
        ans=0
        k=get_int()
        while k>0:
            ans+=k%10
            k=k//10
            cnt+=1
        put(cnt)
        put(ans)




start(solve)
