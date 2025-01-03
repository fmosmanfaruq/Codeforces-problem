#include<iostream>
using namespace std;

int main()
{
    int n,r=0;
    cin>>n;
    r= n/5;
    if(n%5!=0)
    {
        r++;
    }
    cout<<r<<endl;
}