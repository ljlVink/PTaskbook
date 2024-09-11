# Do NOT use lists and arrays!
from pt4 import *
def solve():
    task("ZMinmax16")
    n=get_int()
    Mn=99999
    min_position = -1
    current_position = 0
    for _ in range(n):
        value=get_int()
        if value<Mn:
            Mn=value
            min_position=current_position
        current_position+=1
    put(min_position)



start(solve)
# 9
#0 1 3 0 0 3 0 4 1
# 0