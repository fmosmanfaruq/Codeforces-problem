#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, sum1 = 0, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    int halfsum = sum / 2;
    sort(arr, arr + n);
    for (int i = n - 1; i >= 0; i--)
    {
        sum1 += arr[i];
        count++;
        if (sum1 > halfsum)
        {
            break;
        }
    }
    cout << count;
}