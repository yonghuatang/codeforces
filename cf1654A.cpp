#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, m1 = 0, m2 = 0;
        cin >> n;
        for (int i=0; i<n; i++) {
            int num;
            cin >> num;
            if (num > m1) {
                m2 = m1;
                m1 = num;
            } else if (num > m2) {
                m2 = num;
            }
        }
        cout << m1 + m2 << endl;
    }
    return 0;
}