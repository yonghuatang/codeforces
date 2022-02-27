#include <bits/stdc++.h>
using namespace std;

bool isVowel(const char& c) {
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
        return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;
    int sz = s.size();
    for (int i=0; i<sz-1; i++) {
        if (!isVowel(s[i]) && s[i]!='n' && !isVowel(s[i+1])) {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (!isVowel(s[sz-1]) && s[sz-1]!='n') {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    return 0;
}
