# Do NOT use lists and arrays!
from pt4 import *
import math
def GCD(a:int,b:int):
    if b==0 :return a
    return GCD(b,a%b)
def solve():
    task("ZFunc46")
    a,b,c,d=get4()
    put(GCD(a,b))
    put(GCD(a,c))
    put(GCD(a,d))
    #这样也行 用math.gcd也可以实现。


start(solve)
