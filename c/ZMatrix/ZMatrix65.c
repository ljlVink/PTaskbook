#include "pt4.h"
#include <stdbool.h>
double a[105][105],Mx=-9999;
int n,m,flag=0;
bool isup (int n){
    for(int i=1;i<=m;i++)if(a[i][n]<=0)return false;
    return true;
}

double Max(double a,double b){return a>b?a:b;}
void Solve()
{
    Task("ZMatrix65");
    GetN(&m);
    GetN(&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            GetD(&a[i][j]);
        }
    }
    int del=-1;
    for(int i=1;i<=n;i++){
        if(isup(i)){
            del=i;
            break;
        }
    }
    for(int i=1;i<=m;i++){

        for(int j=1;j<=n;j++){
            if(j!=del)
            PutD(a[i][j]);
        }
    }
}
