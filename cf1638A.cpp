#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=0; tc<t; tc++) {
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        int j = 0;
        while (v[j] == j+1 && j<n) {
            j++;
        }
        for (int k=j+1; k<n; k++) {
            if (v[k] == j+1) {
                std::reverse(v.begin()+j, v.begin()+k+1);
                break;
            }
        }
        for (int i=0; i<n; i++) {
            cout << v[i] << " ";
        }
        cout << '\n';
    }
    return 0;
}