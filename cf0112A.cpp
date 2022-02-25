#include <bits/stdc++.h>
using namespace std;

// Convert to corresponding lower-case alphabet ASCII integer value
int lower(const char& c) {
    if (c >= 97) {
        return (int)c-32;
    }
    return (int)c;
}

int main() {
    string a, b;
    cin >> a >> b;
    int len = a.size(), ans = 0;
    for (int i=0; i<len; i++) {
        if (lower(a[i]) > lower(b[i])) {
            ans++;
            break;
        }
        if (lower(a[i]) < lower(b[i])) {
            ans--;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
