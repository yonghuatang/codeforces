#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int tc=0; tc<t; tc++) {
        int n;
        cin >> n;
        for (int i=1; i<=n; i++) {
            cout << i;
            for (int j=n; j>=1; j--) {
                if (j != i) {
                    cout << " " << j;
                }
            }
            cout << '\n';
        }
    }
    return 0;
}