#include "pt4.h"
#include <stdbool.h>
double a[105][105],Mx=-9999;
int n,m,flag=0;
bool isup (int n){
    for(int i=1;i<=m-1;i++)if(a[i][n]>a[i+1][n])return false;
    return true;
}
bool isdown(int n){
    for(int i=1;i<=m-1;i++)if(a[i][n]<a[i+1][n])return false;
    return true;
}
double Max(double a,double b){return a>b?a:b;}
void Solve()
{
    Task("ZMatrix45");
    GetN(&m);
    GetN(&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            GetD(&a[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        if(isup(i)||isdown(i)){
            flag=1;
            for(int j=1;j<=m;j++){
                Mx=Max(Mx,a[j][i]);
            }
        }

    }
    if(flag){
        PutD(Mx);
    }else{
        PutD(0);
    }
}
