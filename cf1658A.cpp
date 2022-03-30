#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, ans = 0;
        cin >> n;
        string s(n, '0');
        int maleCount = 0, femaleCount = 0;
        char prev = '1';
        for (int i=0; i<n; i++) {
            cin >> s[i];
            s[i] == '1' ? femaleCount++ : maleCount++;
            if (prev == '0' && s[i] == '0') {
                ans++;
                femaleCount++;
                prev = '1';
            } else {
                prev = s[i];
            }
        }
        cout << ans + max(maleCount - femaleCount, 0) << endl;
    }
    return 0;
}