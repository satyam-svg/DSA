#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
       int c=0;
        for (int i = 0; i < s.size(); i++)
        {
            int index1 = s[i] - 'a' + 1;
            int index2 = s[n - i - 1] - 'a' + 1;
            if (s[i] == s[n - i - 1] || abs(index1 - index2) == 2)
            {
                c++;
            }else{
                break;
            }
        }
        // cout<<c;
        if(c==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
