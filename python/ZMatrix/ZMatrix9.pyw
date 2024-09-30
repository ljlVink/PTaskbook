from pt4 import *

def solve():
    task("ZMatrix9")
    m, n = get2()  
    matrix = get_matr(m, n) 
    odd_rows = matrix[1::2]
    for row in odd_rows:
        put(row)  

start(solve)
