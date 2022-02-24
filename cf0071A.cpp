#include <iostream>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    for (int t=0; t<tc; t++) {
        string s;
        cin >> s;
        int sz = s.size();
        if (sz <= 10) {
            cout << s << '\n';
        } else {
            cout << s[0] << sz-2 << s[sz-1] << '\n';
        }
    }
    return 0;
}