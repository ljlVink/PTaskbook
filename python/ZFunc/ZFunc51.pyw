# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZFunc51")
    h=get_int()
    m=get_int()
    s=get_int()
    t=get_int()
    tot=h*3600+m*60+s+t
    put(tot//3600)
    put((tot%3600)//60)
    put((tot%3600)%60)
    
    
    
start(solve)
# 1 16 45  2 20 52
