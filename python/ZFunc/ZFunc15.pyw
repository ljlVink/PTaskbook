# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZFunc15")
    for _ in range(5):
        cnt=0
        k=get_int()
        while k>0:
            put(k%10)
            k=k//10
            cnt+=1
        for __ in range(5-cnt):
            put(-1)


start(solve)
