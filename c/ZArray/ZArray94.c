#include "pt4.h"
int n,lst,fst,tag;
int a[1005];
int b[10005];
void Solve()
{
    Task("ZArray94");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetN(a+i);
    }
    for(int i=1;i<n;i+=2)
        PutN(a[i]); 
   
    
    //...
}
