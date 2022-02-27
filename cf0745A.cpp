#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int sz = s.size();
    set<string> st;
    st.insert(s);
    for (int i=0; i<sz-1; i++) {
        s = s[sz-1] + s.substr(0, sz-1);
        st.insert(s);
    }
    cout << st.size() << endl;
    return 0;
}
