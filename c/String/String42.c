#include "pt4.h"
#include <strings.h>
char a[9999];
char *s=" ";
int cnt=0;
void Solve()
{
    Task("String42");
    GetS(a);

    char *token=strtok(a,s);
    while(token!=NULL){

        if(token[0]==token[strlen(token)-1])cnt++;
        token=strtok(NULL,s);
    }
    PutN(cnt);
}   
