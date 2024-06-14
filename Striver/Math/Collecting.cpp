#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        
        // Find the total sum needed to make all three values equal
        int sum = a + b + c + n;
        
        if (sum % 3 == 0) {
            int target = sum / 3;
            if (target >= a && target >= b && target >= c) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
