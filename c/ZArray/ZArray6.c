#include "pt4.h"
int n;
int a[1005];
void Solve()
{
    Task("ZArray6");
    GetN(&n);
    GetN(&a[1]);
    GetN(&a[2]);
    PutN(a[1]);
    PutN(a[2]);
    PutN(a[1]+a[2]);
    a[3]=a[1]+a[2];
    for(int i=4;i<=n;i++){
        a[i]=a[i-1]*2;
        PutN(a[i]);
    }
    //...
}
