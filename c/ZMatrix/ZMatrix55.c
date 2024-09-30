#include "pt4.h"
#include <stdbool.h>
double a[105][105];
int n,m,flag=0;
void Solve()
{
    Task("ZMatrix55");
    GetN(&m);
    GetN(&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            GetD(&a[i][j]);
        }
    }
    for(int i=m/2+1;i<=m;i++){
        for(int j=1;j<=n;j++){
            PutD(a[i][j]);
        }
    }
    for(int i=1;i<=m/2;i++){
        for(int j=1;j<=n;j++){
            PutD(a[i][j]);
        }
    }
}
