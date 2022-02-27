#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=0; tc<t; tc++) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 2 && s[0] >= s[1]) {
            cout << "NO" << endl;
        } else {
            cout << "YES\n" << "2\n" << s[0] << " " << s.substr(1, n-1) << endl;
        }
    }
    return 0;
}
