#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    // Reading the matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            cin >> x;
            v.push_back(x);
        }
    }

    int a = 3;
    int b = 3;
    int ansi = 0;
    int ansj = 0;
    int finalans = INT_MAX;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (v[i * 5 + j] == 1) {
                ansi = abs((i + 1) - a);
                ansj = abs((j + 1) - b);
                finalans = min(finalans, ansi + ansj);
            }
        }
    }

    cout << finalans;

    return 0;
}
