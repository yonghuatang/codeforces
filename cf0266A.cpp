#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    char previousChar = 'X';
    for (int i=0; i<n; i++) {
        if (s[i] == previousChar) {
            ans++;
        } else {
            previousChar = s[i];
        }
    }
    cout << ans << endl;
    return 0;
}
