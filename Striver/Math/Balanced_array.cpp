#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 4 != 0) {
            cout << "NO\n";
            continue;
        }

        vector<int> even;
        vector<int> odd;
        int even_no = 2;
        int odd_no = 1;
        int sume = 0;
        int sumo = 0;

        for (int i = 0; i < n / 2; i++) {
            even.push_back(even_no);
            sume += even_no;
            even_no += 2;
        }

        for (int i = 0; i < n / 2 - 1; i++) {
            odd.push_back(odd_no);
            sumo += odd_no;
            odd_no += 2;
        }

        odd.push_back(sume - sumo); // The last odd number to balance the sums

        cout << "YES\n";
        for (int i = 0; i < n / 2; i++) {
            cout << even[i] << " ";
        }
        for (int i = 0; i < n / 2; i++) {
            cout << odd[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
