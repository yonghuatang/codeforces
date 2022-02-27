#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    if (a.size() < b.size()) {
        a = "0" * (b.size() < a.size()) + a;
    }
    return 0;
}
