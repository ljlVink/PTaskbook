# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZSeries14")
    k=get_int()
    ans=0
    while 1:
        x=get_int()
        if x==0:break
        if x<k:ans+=1
    put(ans)

start(solve)
