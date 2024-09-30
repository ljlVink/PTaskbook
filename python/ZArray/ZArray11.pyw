from pt4 import *

def solve():
    task("ZArray11")
    n=get_int()
    a=[]
    for _ in range(n):
        a.append(get_float())
    k=get_int()
    i=0
    for i in range(0,len(a),k):
        put(a[i])




start(solve)
