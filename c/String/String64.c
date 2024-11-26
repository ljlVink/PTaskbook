#include "pt4.h"
#include <string.h>
char s[19999];

int len,n;
void Solve()
{
    Task("String64");
    GetS(s);
    GetN(&n);
    len=strlen(s);
    for(int i=0;i<len;i++){
        if((s[i]>='a'&&s[i]<='z')){
            s[i]=(s[i]-n+26-'a')%26+'a';
        }else if(s[i]>='A'&&s[i]<='Z'){
            s[i]=(s[i]-n+26-'A')%26+'A';
        }
    }
    PutS(s);
}
