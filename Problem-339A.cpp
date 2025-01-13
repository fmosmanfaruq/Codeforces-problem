#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //Extarct only the digits from the string
    vector<char>digits;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='+'){
            digits.push_back(s[i]);
        }
    }
    sort(digits.begin(),digits.end());
    string r;
    for(int i=0; i<digits.size(); i++)
    {
        r+=digits[i];
        if(i<digits.size()-1){
            r+='+';
        }
    }
    cout<<r<<endl;
}