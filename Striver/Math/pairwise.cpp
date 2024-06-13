#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int x, y, z;
        cin >> x >> y >> z;

        if (x == y && y == z) {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        } else if (x == y && y >= z) {
            cout << "YES" << endl;
            cout << x << " " << z << " " << z << endl;
        } else if (y == z && x <= y) {
            cout << "YES" << endl;
            cout << x << " " << x << " " << y << endl;
        } else if(x==z && y<=x) {
            if(x)
            cout << "YES" << endl;
            cout << y << " " << y << " " << x << endl;
        }else{
             cout << "NO" << endl;
        }
    }
    return 0;
}
