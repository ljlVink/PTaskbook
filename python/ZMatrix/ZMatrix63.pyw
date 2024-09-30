from pt4 import *
def solve():
    task("ZMatrix63")
    m,n=get2()
    a=get_matr(m,n)
    mn=9999.00
    mnI=0
    for i in range(m):
        for j in range(n):
            if a[i][j]<mn :
                mn=a[i][j]
                mnI=i
    for i in range(m):
        if mnI ==i :
            continue
        for j in range(n):
            put(a[i][j])






start(solve)
