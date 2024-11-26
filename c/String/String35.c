#include "pt4.h"
#include <string.h>
char orig[1050];
char fin[1050];
char new[1050];
int len_orig,len_fin;
void Solve()
{
    Task("String35");
    GetS(orig);
    GetS(fin);
    len_orig=strlen(orig);
    len_fin=strlen(fin);
    
    while(strstr(orig,fin)){
        int pos=strstr(orig,fin)-orig;
        for(int i=pos;i<len_orig-len_fin;i++)
            orig[i] = orig[i+len_fin];
        len_orig -= len_fin;
        orig[len_orig]='\0';
    }

    PutS(orig);
}
