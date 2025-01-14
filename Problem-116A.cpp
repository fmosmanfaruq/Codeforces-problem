#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, r, s, sum = 0, result = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> r >> s;
        sum -= r; 
        sum += s;  
        result = max(result, sum);  
    }

    cout << result << endl;
    return 0;
}
