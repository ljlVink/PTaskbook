from pt4 import *
def solve():
    task("ZMatrix41")
    m,n=get2()
    matrix=get_matr(m,n)
    mxN=0
    mxS=-9999
    # according to the data ,number is smaller than 10
    for i in range (n):
        cnt= [0]* 15 # need to initalize data first!
        for j in range(m):
            cnt[matrix[j][i]] += 1
        for j in range (0,11):
            if cnt[j] > mxS :
                mxS=cnt[j]
                mxN=i
    put(mxN)






start(solve)
