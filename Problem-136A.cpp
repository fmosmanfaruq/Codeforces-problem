#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, arr[101],result[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        result[arr[i]]=i;
    }
    for(int i=1; i<=n; i++){
        cout<<result[i]<<" ";
    }
}
