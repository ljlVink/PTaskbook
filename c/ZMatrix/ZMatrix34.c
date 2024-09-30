#include "pt4.h"
int a[105][105],n,m,tag=0,ans=-1;
// ans need to initalize to -1 !!
void Solve()
{
    Task("ZMatrix34");
    GetN(&n);
    GetN(&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            GetN(&a[i][j]);
        }
        tag=0;
        for(int j=1;j<=m;j++){
            if((a[i][j]&1)){
                tag=-1;
                break;
            }
        }
        if(tag==0){
            ans=i-1;
        }
    }
    PutN(ans);
}
