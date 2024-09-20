# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZSeries12")
    ans=0
    while 1:
        a=get_int()
        if a==0:
            break
        ans += 1
    put(ans)



start(solve)
