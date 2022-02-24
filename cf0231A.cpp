#include <iostream>
using namespace std;

int main() {
    int t, ans = 0;
    cin >> t;
    for (int tc=0; tc<t; tc++) {
        int a, b, c;
        cin >> a >> b >> c;
        ans += (a + b + c >= 2);
    }
    cout << ans << endl;
    return 0;
}