#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<int> v;
    for (int i = 1; i < n; i++) { // Fix loop condition
        int x;
        cin >> x;
        v.push_back(x);
    }
    
    int j=1;
    vector<int> v1;
    int sum = 0;
    v1.push_back(1);
      while(j<n){
        sum = j + v[j-1];
        v1.push_back(sum);
        j = sum;
      }
     
if (find(v1.begin(), v1.end(), t) != v1.end()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

 
    
    

    return 0;
}
