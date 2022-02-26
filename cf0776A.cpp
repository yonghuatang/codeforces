#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    int t;
    cin >> t;
    for (int tc=0; tc<t; tc++) {
        string c, d;
        cin >> c >> d;
        if (a == c) {
            a = d;
        } else {
            b = d;
        }
        cout << a << " " << b << endl;
    }
    return 0;
}
