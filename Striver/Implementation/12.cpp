#include<bits/stdc++.h>
using namespace std;
int countDigits(int number) {
    int count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}
int main() {

        int n;
        cin >> n;

        int c1= 0;
        int c2 = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit == 4) {
                c1++;
            } else if (digit == 7) {
                c2++;
            }
            n /= 10;
        }

        int ans=c1 + c2;
        int digitCount = countDigits(ans);
        int ans1=pow(10,digitCount);
        if(ans%ans1==4 || ans%ans1==7){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


    return 0;
}
