#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        std::sort(v.begin(), v.end());
        bool zeroExists = std::find(v.begin(), v.end(), 0) != v.end();
        bool oneExists = std::find(v.begin(), v.end(), 1) != v.end();
        if (zeroExists && oneExists) {
            cout << "NO" << endl;
            continue;
        }
        if (!oneExists) {
            cout << "YES" << endl;
            continue;
        }
        // else !zeroExists && oneExists case:
        int anchor = v[0];
        bool valid = true;
        for (int i=1; i<n; i++) {
            if (v[i] != anchor) {
                if (v[i] - anchor == 1) {
                    valid = false;
                    break;
                }
                anchor = v[i];
            } 
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}