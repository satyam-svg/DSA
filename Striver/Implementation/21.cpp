#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 1;
    int result = 1; // Initialize result with 1 as the minimum length is 1

    for(int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            ans++;
        } else {
            ans = 1; // Reset length if the current element is not greater than the next
        }
        result = max(result, ans);
    }

    cout << result;

    return 0;
}
