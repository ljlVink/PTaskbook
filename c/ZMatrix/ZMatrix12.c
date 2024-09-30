#include "pt4.h"


double d,a[105][105],b[105][105];
int m,n;
void Solve()
{
    Task("ZMatrix12");
    GetN(&m);
    GetN(&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            GetD(&a[i][j]);
        }
    }
    int flag=1;
    for(int i=1;i<=n;i++){
        if(flag==-1){
            for(int j=m;j>=1;j--){
                PutD(a[j][i]);
            }
        }else {
            for(int j=1;j<=m;j++){
            PutD(a[j][i]);
        }

        }
        flag*=-1;
    }

}
