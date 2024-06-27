#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, r;
    cin >> k >> r;
    int count = 1;

    while (true) {
        int sum1 = count * k;
        if (sum1 % 10 == 0 || sum1 % 10 == r) {
            cout << count << endl;
            break;
        }
        count++;
    }

    return 0;
}
