#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int x, y, n;
        cin >> x >> y >> n;
        
        // Compute the largest multiple of x less than or equal to n
        long long int k = n - (n % x) + y;
        
        // If k is greater than n, subtract x to make it within the limit
        if (k > n) {
            k -= x;
        }
        
        cout << k << endl;
    }
    return 0;
}
