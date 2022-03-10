#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        cout << (int)pow(2, n) - 1 << endl;
    }
    return 0;
}