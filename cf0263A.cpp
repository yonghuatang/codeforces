#include <bits/stdc++.h>
using namespace std;

int main() {
    int ans = 0;
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            int num;
            cin >> num;
            if (num) {
                ans += abs(i-2) + abs(j-2);
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
