// Do NOT use arrays!
#include "pt4.h"
int a,b,c,ws=1,aa;
void Solve()
{
    Task("ZFunc30");
    GetN(&a); // k
    GetN(&b); // d1
    GetN(&c); // d2
    aa=a;
    while(aa>0){
        aa/=10;
        ws*=10;
    }
    PutN(ws*b+a);
    PutN(ws*c*10+ws*b+a);
}
