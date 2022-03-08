#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        string s;
        cin >> s;
        int sz = s.size();
        char c;
        cin >> c;
        bool valid = false;
        for (int i=0; i<sz; i++) {
            if (s[i] == c) {
                if (i % 2 == 0 && (sz-1-i) % 2 == 0) {
                    valid = true;
                    break;
                }
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}
