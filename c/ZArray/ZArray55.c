#include "pt4.h"
int n,lst,fst,tag;
int a[1005];
int b[10005];
void Solve()
{
    Task("ZArray55");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetN(a+i);
    }
    for(int i=0;i<n;i+=2){
        tag++;
        b[i]=a[i];
    }
    PutN(tag);
    for(int i=0;i<n;i+=2){
        PutN(b[i]);    
    }
    
    //...
}
