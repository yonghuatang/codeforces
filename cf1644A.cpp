#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=0; tc<t; tc++) {
        string s;
        cin >> s;
        int r = 0, g = 0, b = 0;
        bool valid = true;
        for (int i=0; i<6; i++) {
            if (s[i] == 'r') { r++; }
            if (s[i] == 'g') { g++; }
            if (s[i] == 'b') { b++; }
            if (s[i] == 'R' && r == 0) { valid = false; break; }
            if (s[i] == 'G' && g == 0) { valid = false; break; }
            if (s[i] == 'B' && b == 0) { valid = false; break; }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
    return 0;
}