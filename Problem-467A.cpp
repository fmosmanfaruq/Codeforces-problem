#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b;
        cin>>a>>b;
        if(b-a>=2)
        {
            count++;
        }
    }
    cout<<count<<endl;
}