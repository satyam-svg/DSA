#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int x=max(a,b);
        int y=max(b,c);
        int z;
        if(x+y<=d){
           z=min(c,d);
        }else{
            z=max(c,d);
        }

        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}
