#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int h, m;
        cin >> h >> m;
        cout << (24 - h) * 60 - m << endl;
    }
    return 0;
}
