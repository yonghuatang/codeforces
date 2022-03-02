#include <iostream>
using namespace std;

int main() {
    string s, ans = "";
    cin >> s;
    int sz = s.size(), upperCount = 0, lowerCount = 0;
    for (int i=0; i<sz; i++) {
        s[i] < 97 ? upperCount++ : lowerCount++;  // ASCII
    }
    if (upperCount > lowerCount) {
        for (int i=0; i<sz; i++) {
            ans += s[i] < 97 ? s[i] : s[i] - 32;
        }
    } else {
        for (int i=0; i<sz; i++) {
            ans += s[i] < 97 ? s[i] + 32 : s[i];
        }
    }
    cout << ans << endl;
    return 0;
}
