#include "pt4.h"
int n,k,tag;
double a[1005],fir;
void Solve()
{
    Task("ZArray108");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetD(a+i);
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
            PutD(0);
        }
        PutD(a[i]);
    }
    
    //...
}
