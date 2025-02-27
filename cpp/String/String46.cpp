#include "pt4.h"
using namespace std;

void Solve()
{
    Task("String46");
    string str;
    pt >> str;
    vector<string> words;
    string word;
    for (auto it = str.begin(); it != str.end(); ++it)
    {
        if (*it == ' ')
        {
            words.push_back(word);
            word.clear();
        }
        else
        {
            word.append(1, *it);
        }
    }
    words.push_back(word);
    size_t longest = 0;
    for (auto it = words.begin(); it != words.end(); ++it)
    {
        if (it->size() > longest)
        {
            longest = it->size();
        }
    }
    pt << longest;
}
