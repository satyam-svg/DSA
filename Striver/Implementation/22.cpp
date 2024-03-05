#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string s1, s2, s3, s4, s5;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;
    bool flag = false;  // Initialize flag to false

    for (int i = 0; i < 2; i++) {
        if (s[i] == s1[i] || s[i] == s2[i] || s[i] == s3[i] || s[i] == s4[i] || s[i] == s5[i]) {
            flag = true; 
            break;        
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
