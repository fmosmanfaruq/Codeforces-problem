#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count = 0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        count+= num;
    }
    if(count >= 1)
    {
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"easy"<<endl;
    }
}