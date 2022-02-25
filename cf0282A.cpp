#include <iostream>
using namespace std;

// int main() {
//     int n, X = 0;
//     cin >> n;
//     for (int i=0; i<n; i++) {
//         string s;
//         cin >> s;
//         if (s[0] + s[1] + s[2] == 174) {
//             X++;
//         } else {
//             X--;
//         }
//     }
//     cout << X << '\n';
//     return 0;
// }

int main() {
    int n, X = 0;
    cin >> n;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;
        if (s[1] == '+') {
            X++;
        } else {
            X--;
        }
    }
    cout << X << '\n';
    return 0;
}
