#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int x, y, z;
    cin >> x >> y >> z;
    
    long long int initialcount = x / z + y / z;  // Calculate initial total count
    cout<<x/z<<" "<<y/z<<" ";
    long long int remainderX = x % z;
    long long int remainderY = y % z;
    long long int diff = 0;

    if (remainderX == 0 || remainderY == 0) {
        cout << initialcount << " " << 0;
    } else {
        long long int combinedRemainder = remainderX + remainderY;

        if (combinedRemainder >= z) {
            initialcount++;  // One additional count if the combined remainders can form an additional part
            diff = min(z - remainderX, z - remainderY);  
        }

        cout << initialcount << " " << diff;
    }
    return 0;
}
