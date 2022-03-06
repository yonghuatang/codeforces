#include <iostream>
using namespace std;

int main() {
    int n, low, high, ans = 0;
    cin >> n;
    int num;
    cin >> num;
    low = high = num;
    for (int i=0; i<n-1; i++) {
        int num;
        cin >> num;
        if (num < low) {
            ans++;
            low = num;
        }
        if (num > high) {
            ans++;
            high = num;
        }
    }
    cout << ans << endl;
    return 0;
}
