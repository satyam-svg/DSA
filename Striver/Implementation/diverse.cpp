#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Check for any adjacent characters that are different
    vector<char> v3;
    bool found = false;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
            v3.push_back(s[i]);
            v3.push_back(s[i + 1]);
            found = true;
            break; 
        }
    }

    if (found) {
        cout << "YES" << endl;
        cout << v3[0] << v3[1] << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
