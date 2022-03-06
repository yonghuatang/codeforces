#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        ll n, s;
        cin >> n >> s;
        cout << s / (n*n) << endl;
    }
    return 0;
}
