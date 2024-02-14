#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v;
        int c = 0;
        int tempN = n;  
        while (tempN != 0) {
            int digit = tempN % 10;
            if (digit != 0) {
                c++;
            }
            tempN /= 10;
           
        }

        cout << c << endl;  

        int multiplier = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 0) {
                v.push_back(digit * multiplier);
            }
            n /= 10;
            multiplier *= 10;
        }

        for (auto it : v) {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
