#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[101];
    double r=0.0,count =0.0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        count = arr[i]+count;
    }
    r = count/n;
    cout<<fixed<<setprecision(12)<<r<<endl;
}