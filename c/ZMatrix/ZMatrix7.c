#include "pt4.h"

void Solve() {
    Task("ZMatrix7");
    
    int M, N, K;
    
    // 获取矩阵的行数和列数
    GetN(&M);
    GetN(&N);
    
    double matrix[M][N];  // 定义 M×N 矩阵
    
    // 输入矩阵元素
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            GetD(&matrix[i][j]);
        }
    }
    
    // 获取要输出的行号 K
    GetN(&K);
    
    // 输出第 K 行的元素
    for (int j = 0; j < N; j++) {
        PutD(matrix[K][j]);
    }
}
