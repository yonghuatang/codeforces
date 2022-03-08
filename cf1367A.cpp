#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        string s;
        cin >> s;
        int sz = s.size();
        for (int i=0; i<sz/2; i++) {
            cout << s[i*2];
        }
        cout << s[sz-1] << '\n';
    }
    return 0;
}
