#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,k;
    cin>>s>>k;
    for(int i=0; i<s.length(); i++){
        if(s[i]==k[i]){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }
}