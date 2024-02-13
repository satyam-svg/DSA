#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> v1;

    for (int i = 0; i < n; i++)
    {
        string x;  // Change from char to string
        cin >> x;
        v1.push_back(x);
    }

    int X = 0;

    for (int i = 0; i < n; i++)
    {
       if (v1[i] == "++X" || v1[i]=="X++") {
          X += 1;
       } else {
          X -= 1;
       }
    }

    cout << X << endl;
    
    return 0;
}
