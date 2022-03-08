#include <bits/stdc++.h>
using namespace std;

struct comp1 {
    bool operator()(tuple<int, int, int> t1, tuple<int, int, int> t2) {
        return get<2>(t1) > get<2>(t2);
    }
};

struct comp2 {
    bool operator()(tuple<int, int, int> t1, tuple<int, int, int> t2) {
        return get<1>(t1) > get<1>(t2);
    }
};

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int n, m;
        cin >> n >> m;
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, comp1> pq1;
        for (int i=0; i<m; i++) {
            int xi, wi;
            cin >> xi >> wi;
            pq1.push({i, xi, wi});
        }
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, comp2> pq2;
        for (int i=0; i<2*n; i++) {
            pq2.push(pq1.top());
            pq1.pop();
        }
        auto pq_temp = pq2;
        int total = 0;
        while (!pq_temp.empty()) {
            total += get<2>(pq_temp.top());
            pq_temp.pop();
        }
        cout << total << endl;
        deque<tuple<int, int, int>> dq;
        while (!pq2.empty()) {
            dq.push_back(pq2.top());
            pq2.pop();
        }
        while (!dq.empty()) {
            cout << get<0>(dq.front()) << " " << get<0>(dq.back()) << endl;
            dq.pop_front();
            dq.pop_back();
        }
    }
    return 0;
}  // ???
