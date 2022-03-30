#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n, 0);
        bool valid = false;
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        set<int> s(v.begin(), v.end());
        bool ok = false;
        // for (int i=0; i<n; i++) {
        //     if (s.count(v[i] + k)) {
        //         ok = true;
        //         break;
        //     }
        // }
        for (auto it=s.begin(); it!=s.end(); it++) {
            if (s.count((*it)+k)) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}