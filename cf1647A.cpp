#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        if (n % 3 == 1) {
            cout << "1";
        }
        for (int i=0; i<n/3; i++) {
                cout << "21";
        }
        if (n % 3 == 2) {
            cout << "2";
        }
        cout << '\n';
    }
    return 0;
}