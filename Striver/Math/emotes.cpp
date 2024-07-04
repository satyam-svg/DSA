#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m, k;
    cin >> n >> m >> k;
    vector<long long int> v1(n);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    sort(v1.begin(), v1.end());
    long long int first_max = v1[n - 1];
    long long int second_max = v1[n - 2];

   int diff=m/(k+1);
   long long int yo=first_max*k*diff;
   long long int pro=second_max*diff;
   long long res=yo+pro;
   cout<<res;


    return 0;
}
