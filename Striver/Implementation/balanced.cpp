#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int res = 0;
    vector<bool> wasOdd(n, false); // Track which elements were originally odd
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 != 0) {
            wasOdd[i] = true;
        }
        v[i] = round(static_cast<float>(v[i]) / 2); // Round to the nearest integer
        res += v[i];
    }

    // Adjust only the elements that were originally odd
    int idx = 0;
    while (res != 0) {
        if (wasOdd[idx]) {
            if (v[idx] < 0) {
                v[idx] += 1;
                res += 1;
            } else {
                v[idx] -= 1;
                res -= 1;
            }
        }
        idx++;
        if (idx == n) {
            idx = 0; // Loop back to the start of the vector
        }
    }
    // Output the result
    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }

    return 0;
}
