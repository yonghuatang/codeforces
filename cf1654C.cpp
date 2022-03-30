#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n;
        long long sum = 0;
        cin >> n;
        vector<int> v(n, 0);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            sum += v[i];
        }
        std::sort(v.begin(), v.end());

        priority_queue<long long> pq;
        pq.push(sum);
        bool valid = true;
        for (int op=1; op<=n-1 && valid && !pq.empty(); op++) {
            // auto it = std::find(v.begin(), v.end(), pq.top());
            if (pq.top() != v[v.size()-1]) {
                int slice1, slice2;
                if (pq.top() % 2 == 0) {
                    slice1 = slice2 = pq.top() / 2;
                } else {
                    slice1 = pq.top() / 2; slice2 = slice1 + 1;
                }
                pq.push(slice1);
                pq.push(slice2);
                
            } else {
                v.pop_back();
            }
            pq.pop();
        }
        cout << (? "YES" : "NO") << endl;
    }
    return 0;
}