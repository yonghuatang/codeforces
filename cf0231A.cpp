#include <iostream>
using namespace std;

int main() {
    int tc, ans = 0;
    cin >> tc;
    for (int t=0; t<tc; t++) {
        int a, b, c;
        cin >> a >> b >> c;
        ans += (a + b + c >= 2);
    }
    cout << ans << endl;
    return 0;
}