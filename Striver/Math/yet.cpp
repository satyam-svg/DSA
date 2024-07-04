#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        
        // If a is already equal to b, no operations are needed.
        if (a == b) {
            cout << 0 << endl;
        } else {
            // Calculate the difference between a and b
            int difference = abs(a - b);
        
            int steps = (difference + 9) / 10;  
            
            cout << steps << endl;
        }
    }
    return 0;
}
