#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        int firstZero = 1, lastZero = -1;  // initial conditions
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        for (int i=0; i<n; i++) {
            if (v[i] == 0) {
                firstZero = i;
                break;
            }
        }
        for (int i=n-1; i>=0; i--) {
            if (v[i] == 0) {
                lastZero = i;
                break;
            }
        }
        cout << lastZero - firstZero + 2 << endl;
    }
    return 0;
}
