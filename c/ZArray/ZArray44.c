#include "pt4.h"
int n,lst,fst,tag;
int a[1005];
int b[10005];
void Solve()
{
    Task("ZArray44");
    GetN(&n);
    for(int i=0;i<n;i++){
        GetN(a+i);
        b[a[i]]++;
        if(b[a[i]]==2){
            lst=i;
            tag=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==tag){
            PutN(i);
            PutN(lst);
            return ;
        }
    }
    //...
}
