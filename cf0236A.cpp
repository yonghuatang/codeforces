#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<char, int> m;
    for (const char& c : s) {
        m[c]++;
    }
    cout << ((m.size()) % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;
    return 0;
}
