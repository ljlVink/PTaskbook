from pt4 import *
def solve():
    task("ZMatrix20")
    m,n=get2()
    matrix=get_matr(m,n)
    ans=[1]*n
    for i in range (m):
        for j in range(n):
            ans[j] *= matrix[i][j]
    for i in range (n):
        put(ans[i])
    







start(solve)
