#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        vector<int> a(n, 0), b(n, 0);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        for (int i=0; i<n; i++) {
            cin >> b[i];
        }
        ll mode1 = 0, mode2 = 0;  // network topology: mode1 = criss-cross; mode2 = loop
        vector<ll> mode1v;
        for (int i=1; i<=n/2; i++) {
            ll temp = 0;
            for (int j=0; j<n-i; j++) {
                temp += abs(a[j] - b[j+i]);
                temp += abs(b[j] - a[j+i]);
            }
            mode1v.push_back(temp);
        }
        mode1 = *std::min_element(mode1v.begin(), mode1v.end());
        mode2 += abs(a[0]-b[0]) + abs(a[n-1]-b[n-1]);
        cout << min(mode1, mode2) << endl;
    }
    return 0;
}  // ?? WA test 2