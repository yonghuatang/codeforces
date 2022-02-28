#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        string s;
        int ans = 0;
        cin >> s;
        ans += (s.size() - 1) * 9;
        ans += s[0] - 48;  // ASCII
        for (int i=1; i<s.size(); i++) {
            if (s[i] > s[0]) {
                break;
            } else if (s[i] < s[0]) {
                ans--;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
