#include "pt4.h"
#include <string.h>
#include <stdlib.h>

char str[999];
int len,n,cnt;
void Solve()
{
    Task("String12");
    GetS(str);
    GetN(&n);
    len=strlen(str);
    char *mod = (char *) malloc(len+(len)*n);
    for(int i=0;i<len-1;i++){
        mod[cnt]=str[i];
        cnt++;
        for(int j=1;j<=n;j++,cnt++){
            mod[cnt]='*';
        }
    }
    mod[cnt]=str[len-1];
    mod[cnt+1]='\0'; //important!! 
    PutS(mod);
    ShowS(mod);
    free(mod); //free
}
