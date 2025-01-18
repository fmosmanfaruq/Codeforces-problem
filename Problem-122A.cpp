#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count =0;
    int arr[12] = {4, 7, 47, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    for (int i = 0; i < 12; i++)
    {
        if (n % arr[i] == 0)
        {
            count++;
        }
    }
    if (count>=1)
    {
        cout << "YES";
    }
    else
    {
        cout<<"NO";
    }
}