#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<string, int>& p1, const pair<string, int>& p2) {
    return p1.second < p2.second;
}
int main() {
    int n, ans = 0;
    cin >> n;
    map<string, int> m;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto it=m.begin(); it!=m.end(); it++) {
        auto i = it -> second;
        ans = i > ans ? i : ans;
    }
    cout << ans << endl;
    return 0;
}
