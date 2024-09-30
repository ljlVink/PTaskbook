#include "pt4.h"
int n;
double a[1005];
void Solve()
{
    Task("ZArray14");
    GetN(&n);
    for(int i=1;i<=n;i++){
        GetD(a+i);
    }
    for(int i=1;i<=n;i+=2){
        PutD(a[i]);
    }
    for(int i=2;i<=n;i+=2){
        PutD(a[i]);
    }
    ShowLineD(1234);
    //...
}
