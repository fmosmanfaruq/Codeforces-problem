#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int count=0;
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
            if(count >= 6)
            {
                cout<<"YES";
                return 0;
            }
        }
        else{
            count = 0;
        }
    }
    cout<<"NO";

   
}