#include "pt4.h"
int n,k,fst,tag;
double a[1005];
void Solve()
{
    Task("ZArray82");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetD(a+i);
    }
    GetN(&k);
    for(int i=0;i<n-k;i++){
        a[i]=a[i+k];
        PutD(a[i]);
    }
    for(int i=0;i<k;i++){
        PutD(0);
    }

    
    //...
}
