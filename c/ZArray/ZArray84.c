#include "pt4.h"
int n,k,tag;
double a[1005],fir;
void Solve()
{
    Task("ZArray84");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetD(a+i);
    }
    k=1;
    fir=a[0];
    for(int i=0;i<n-k;i++){
        a[i]=a[i+k];
        PutD(a[i]);
    }
    PutD(fir);
    
    //...
}
