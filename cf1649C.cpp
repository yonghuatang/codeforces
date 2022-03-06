#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    int n, m;
    ll ans = 0;
    cin >> n >> m;
    map<int, vector<pair<int, int>>> mp;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            int num;
            cin >> num;
            if (mp[num].size() != 0) {
                auto v = mp[num];
                int sz = v.size();
                for (int k=0; k<sz; k++) {
                    ans += abs(v[k].first-i) + abs(v[k].second-j);
                }
            }
            mp[num].push_back(make_pair(i, j));
        }
    }
    cout << ans << endl;
    return 0;
}
