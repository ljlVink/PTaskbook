#include "pt4.h"
#include <stdio.h>
char filename[100];
char str[600];
int isAutumn(int m){
    return m>=9 && m<=11;
}
void CompareDate(int *ansD, int *ansM, int *ansY, int d, int m, int y) {
    if (*ansY < y || (*ansY == y && *ansM < m) || (*ansY == y && *ansM == m && *ansD < d)) {
        *ansD = d;
        *ansM = m;
        *ansY = y;
    }
}

void Solve()
{
    Task("File72");
    GetS(filename);
    FILE *fp=fopen(filename,"rb");
    int d,m,y,have_autumn=0;
    int ansD=0,ansM=0,ansY=0;
    while(fread(str, sizeof(char), 10, fp) == 10){
            if(sscanf(str,"%d/%d/%d",&d,&m,&y)==3){
                if(isAutumn(m)){
                    if (!have_autumn) { 
                        ansD = d;
                        ansM = m;
                        ansY = y;
                        have_autumn = 1;
                    } else {
                        CompareDate(&ansD, &ansM, &ansY, d, m, y);
                    }
                }
            }
    }
    char result[12];
    if(have_autumn){sprintf(result, "%02d/%02d/%04d", ansD, ansM, ansY);
    PutS(result);}
    else PutS("");

}