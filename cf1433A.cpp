#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        string x;
        cin >> x;
        int ans = 0;
        ans += (x[0]-48-1) * 10;
        ans += ((float)x.size()/2)*(2+x.size()-1);  // sum of arithmetic progression
        cout << ans << endl;
    }
    return 0;
}
