#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x; // Change the data type to long long
    cin >> x;
    vector<int> r;

    while (x != 0) {
        int rem = x % 10;
        r.push_back(rem);
        x = x / 10;
    }

    reverse(r.begin(), r.end());

    for (int i = 0; i < r.size(); i++) {
        if (r[i] == 9 && i == 0) {
            r[i] = 9;
        } else if ((9 - r[i]) < r[i]) {
            r[i] = 9 - r[i];
        } else {
            continue;
        }
    }

    for (int i = 0; i < r.size(); i++) {
        cout << r[i];
    }

    return 0;
}
