#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, firstNum;
        cin >> n >> firstNum;
        pair<int, int> p_min = {firstNum, 1}, p_max = {firstNum, 1};
        for (int i=2; i<n+1; i++) {
            int num;
            cin >> num;
            if (num > p_max.first) {
                p_max.first = num;
                p_max.second = i;
            } else if (num < p_min.first) {
                p_min.first = num;
                p_min.second = i;
            }
        }
        cout << p_min.second << " " << p_max.second << endl;
    }
    return 0;
}