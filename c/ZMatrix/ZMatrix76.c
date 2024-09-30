#include "pt4.h"
#include <stdlib.h>
#include <stdbool.h>
double a[105][105],Mx=-9999;
int n,m,flag=0;
int cmp(const void *a, const void *b) {
    double *rowA = ( double *)a;
    double *rowB = ( double *)b;
    if(rowA[0]>rowB[0])return 1;
    if (rowA[0]<rowB[0])return -1;
    return 0;
}

double Max(double a,double b){return a>b?a:b;}
void Solve()
{
    Task("ZMatrix76");
    GetN(&m);
    GetN(&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            GetD(&a[i][j]);
        }
    }
    qsort(a,m,sizeof(a[0]),cmp);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            PutD(a[i][j]);
        }
    }
}
