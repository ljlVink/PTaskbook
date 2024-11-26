#include "pt4.h"
char c;
char *capital="capital";
char *digit="digit";
char *small="small";
void Solve()
{
    Task("String6");
    GetC(&c);
    if(c>='A' && c<='Z') PutS(capital);
    else if(c>='a' && c<='z') PutS(small);
    else if(c>='0' && c<='9') PutS(digit);
}
