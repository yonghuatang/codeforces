#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;
    int numerator = 6 - max(y, w) + 1, denominator = 6;
    if (numerator % 2 == 0) {
        numerator /= 2;
        denominator /= 2;
    }
    if (numerator % 3 == 0) {
        numerator /= 3;
        denominator /= 3;
    }
    cout << numerator << "/" << denominator << endl;
    return 0;
}
