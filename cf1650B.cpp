#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=1; tc<=t; tc++) {
        int l, r, a;
        cin >> l >> r >> a;
        int num = r - (r%a) - 1;
        cout << (num < l ? (r/a)+(r%a) : std::max((r/a)+(r%a), (num/a)+(num%a))) << endl;
    }
    return 0;
}
