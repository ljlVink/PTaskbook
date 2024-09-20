// Do NOT use arrays!
#include "pt4.h"
int n;
double x,fir,sec,thi;
void Solve()
{
    Task("ZSeries23");
    GetN(&n);
    GetD(&fir);
    GetD(&sec);
    for(int i=3;i<=n;i++){
        GetD(&thi);
        if(!((sec>fir&&sec>thi)||(sec<fir&&sec<thi))){
            PutN(i-2);
            return;
        }
        fir=sec;
        sec=thi;
    }
    PutN(-1);
}
