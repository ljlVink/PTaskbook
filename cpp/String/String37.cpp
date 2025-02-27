#include "pt4.h"
using namespace std;

void Solve()
{
    Task("String37");
    string str, s1, s2;
    pt >> str >> s1 >> s2;
    int pos = -1;
    for (auto it = str.begin(); it != str.end(); it++)
    {
        int i = it - str.begin();
        if (str.substr(i, s1.size()) == s1)
        {
            pos = i;
        }
    }
    if (pos != -1)
    {
        str.replace(pos, s1.size(), s2);
    }
    pt << str;
}
