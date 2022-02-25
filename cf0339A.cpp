#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> v;
    for (int i=0; i<s.size(); i+=2) {
        v.push_back(s[i]);
    }
    std::sort(v.begin(), v.end());
    for (auto it=v.begin(); it<v.end()-1; it++) {
        cout << (*it) << "+";
    }
    cout << v[v.size()-1] << '\n';
    return 0;
}
