// Do NOT use arrays!
#include "pt4.h"
int n,st,ed;
double prev,x,Min=99999.00,tmp;
void Solve()
{
    Task("ZMinmax25");
    GetN(&n);
    GetD(&prev);
    st=0;
    ed=0;
    for(int i=1;i<n;i++){
        GetD(&x);
        tmp=x*prev;
        if (tmp<Min){
            Min=tmp;
            st=i-1;
            ed=i;
        }
        prev=x;
    }
    PutN(st);
    PutN(ed); //start from i=1
}
