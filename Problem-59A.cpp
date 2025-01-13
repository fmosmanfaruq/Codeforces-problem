#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int upCount = 0, lowerCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            upCount++;
        }
        else
        {
            lowerCount++;
        }
    }
    char ch;
    if (upCount > lowerCount)
    {
        for (int i = 0; i < s.size(); i++)
        {
            ch = toupper(s[i]);
            cout << ch;
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            ch = tolower(s[i]);
            cout << ch;
        }
    }
}