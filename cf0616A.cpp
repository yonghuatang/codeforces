#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    cin >> a >> b;
    int diff = abs((int)(a.size() - b.size()));
    string temp = "";
    if (a.size() < b.size()) {
        for (int i=0; i<diff; i++) {
            temp += "0";
        }
        a = temp + a;
    } else if (a.size() > b.size()) {
        for (int i=0; i<diff; i++) {
            temp += "0";
        }
        b = temp + b;
    }
    for (int i=0; i<a.size(); i++) {
        if (a[i] < b[i]) {
            cout << "<" << endl;
            return 0;
        }
        if (a[i] > b[i]) {
            cout << ">" << endl;
            return 0;
        }
    }
    cout << "=" << endl;
    return 0;
}
