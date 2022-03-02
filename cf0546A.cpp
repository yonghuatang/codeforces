#include <iostream>
using namespace std;

int main() {
    int k, n, w, ans = 0;
    cin >> k >> n >> w;
    ans += ((float)w/2) * (2+w-1) * k;  // arithmetic progression sum
    cout << max(0, ans - n) << endl;
    return 0;
}
