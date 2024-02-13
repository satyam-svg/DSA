#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1;

    for (int i = 0; i < 3; i++) {  // Change the loop condition to iterate 3 times
        int x;
        cin >> x;
        v1.push_back(x);
    }

    sort(v1.begin(), v1.end());
    int a = v1[1] - v1[0];
    int b = v1[2] - v1[1];
    cout << a + b;

    return 0;
}
