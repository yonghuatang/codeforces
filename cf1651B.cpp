#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        if (n > 19) {
            cout << "NO" << '\n';
            continue;
        } else {
            cout << "YES" << '\n';
            for (int i=0; i<n; i++) {
                cout << (int)std::pow(3, i) << " ";
            }
            cout << '\n';
        }
    }
    return 0;
}