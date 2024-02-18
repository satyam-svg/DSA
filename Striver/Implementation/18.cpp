#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    
    string result;
    result += toupper(s[0]);

    
    s.replace(0, 1, result);

    cout << s << endl;

    return 0;
}
