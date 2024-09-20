// Do NOT use arrays!
#include "pt4.h"
double a,b,c;
void Solve()
{
    Task("ZFunc36");
    for(int i=1;i<=2;i++){
        GetD(&a);
        GetD(&b);
        GetD(&c);
        PutD(b);
        PutD(c);
        PutD(a);
    }
}
