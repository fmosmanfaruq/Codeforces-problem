#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        if(i%2==1){
            cout<<"I love";
        }
        else{
            cout<<"I hate";
        }
        if(i!=n-1){
            cout<<" that ";
        }
        else{
            cout<<" it ";
        }
    }
}