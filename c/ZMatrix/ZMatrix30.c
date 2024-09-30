#include "pt4.h"


double d,a[105][105],b[105][105],sum=0;
int m,n,ans=0;
void Solve()
{
    Task("ZMatrix30");
    GetN(&m);
    GetN(&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            GetD(&a[i][j]);
            
        }
    }
    for(int i=1;i<=n;i++){
        sum=0;
        ans=0;

        for(int j=1;j<=m;j++){
            sum+=a[j][i];
        }
        sum/=(double)m;
        for(int j=1;j<=m;j++){
            if(a[j][i]>sum)ans++;
        }
        PutN(ans);
    }
    
}
