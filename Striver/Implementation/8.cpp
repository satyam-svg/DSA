#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        v.push_back(x);
    }

    int c = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == "Tetrahedron") {
            c += 4;
        } else if (v[i] == "Cube") {
            c += 6;
        } else if (v[i] == "Octahedron") {
            c += 8;
        } else if (v[i] == "Dodecahedron") {
            c += 12;
        } else {
            c += 20;
        }
    }

    cout << c;

    return 0;
}
