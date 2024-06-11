#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, b;
    cin >> n >> k;
    vector<pair<int, int>> v; // Vector to store pairs of (value, index)
    for (int i = 0; i < n; i++) {
        cin >> b;
        v.push_back({b, i + 1}); // Store value and 1-based index
    }

    int sum = 0;
    vector<int> v1;
    int c = 0;
    sort(begin(v), end(v)); // Sort based on the first element of pairs (the value)
    
    for (int i = 0; i < n; i++) {
        sum += v[i].first; 
        if (sum <= k) {
            c++;
            v1.push_back(v[i].second); 
        } else {
            break;
        }
    }

    cout << c << endl;
    for (int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
