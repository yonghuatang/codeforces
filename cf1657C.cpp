#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        int pos = 0;
        while (pos <= n-2) {
            if (s[pos] == '(') {  // always will be good, either "()" or "(("
                count++;
                pos += 2;
            } else {  // what if s[pos] == ')'
                int pos_temp = pos;
                pos_temp++;
                while (pos_temp < n && s[pos_temp] == '(') {
                    pos_temp++;
                }
                if (pos_temp == n) {
                    break;
                }
                count++;
                pos = pos_temp + 1;
            }
        }
        cout << count << " " << n-pos << endl;
    }
    return 0;
}