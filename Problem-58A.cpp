#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, target = "hello";
    cin >> s;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == target[j])
        {
            j++;
        }
    }
    if (target.size() == j)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}