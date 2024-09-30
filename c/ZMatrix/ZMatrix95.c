#include "pt4.h"
#include <stdlib.h>
#include <stdbool.h>
double a[105][105],Mx=-9999;
int n,m,flag=0;

double Max(double a,double b){return a>b?a:b;}
void Solve()
{
    Task("ZMatrix95");
    GetN(&m);
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            GetD(&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            a[i][j] *= (i<j||i+j<m-1);
        }
    }


    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            PutD(a[i][j]);
        }
    }
}
