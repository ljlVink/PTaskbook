#include "pt4.h"


double d,a[105][105];
int m,n;
void Solve()
{
    Task("ZMatrix5");
    GetN(&m);
    GetN(&n);
    GetD(&d);
    for(int i=1;i<=m;i++){
        GetD(&a[i][1]);
        PutD(a[i][1]);
        
        for(int j=2;j<=n;j++){
            a[i][j]=a[i][j-1]+d;
            PutD(a[i][j]);
        }
    }


}
