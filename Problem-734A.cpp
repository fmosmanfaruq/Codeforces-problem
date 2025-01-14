#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,countA =0,countD =0 ;
    string s;
    cin>>n>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='A')
        {
            countA++;
        }
        else{
            countD++;
        }
    }
    if(countA>countD)
    {
        cout<<"Anton";
    }
    else if(countA<countD)
    {
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
}