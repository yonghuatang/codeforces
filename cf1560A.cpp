#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int cur = 0;
    vector<int> v;  // memoisation
    for (int tc=1; tc<=t; tc++) {
        int k;
        cin >> k;
        while (k > v.size()) {
            cur++;
            string curString = to_string(cur);
            if (cur % 3 != 0 && curString[curString.size()-1] != '3') {
                v.push_back(cur);
            }
        }
        cout << v[k-1] << endl;
    }
    return 0;
}
