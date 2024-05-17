#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
       cin>>v[i];
    }
long long int t=v[n-1];
    for (int i = n-2; i>=0; i--)
    {
         int ans=min(v[i+1]-1,v[i]);
         if(ans<0) ans=0;
         v[i]=ans;
         t+=ans;
    }
    cout<<t;
    
return 0;
}