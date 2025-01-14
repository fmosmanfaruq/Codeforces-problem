#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r,t;
    cin>>s>>r;
    reverse (s.begin(),s.end());
    if(s==r)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}