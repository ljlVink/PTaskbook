#include "pt4.h"
int m;
double a[105][105];
void Solve()
{
    Task("ZMatrix13");
    GetN(&m);
    for(int i=1;i<=m;i++)
    for(int j=1;j<=m;j++)
    GetD(&a[i][j]);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i+1;j++){
            PutD(a[i][j]);
        }
        for(int j=1;j<=m-i;j++){
            PutD(a[m][m-i+1]);
        }
    }
}
