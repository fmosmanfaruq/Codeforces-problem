#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100001],count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count ++;
        }
    }
    cout<<count<<endl;
}