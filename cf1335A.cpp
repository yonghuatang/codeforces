#include <iostream>
using namespace std;

int main() {
    int t, ans;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        cin >> n;
        ans = n / 2;
        ans -= n % 2 == 0;
        cout << ans << endl;
    }
    return 0;
}
