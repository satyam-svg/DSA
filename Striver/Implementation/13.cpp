#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i];
    }
    vector<int>v;
    int count=0;
    for (int i = 0; i < n-1; i++)
    {
         count=abs(b[i]-a[i+1])+b[i+1];
        v.push_back(count);
        b[i+1]=count;

    }
    int ans2=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ans2=max(ans2,b[i]);
    }
    
    
    
int ans=INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        ans=max(ans,v[i]);
    }

    
    if(ans>ans2){
        cout<<ans<<endl;
    }else{
        cout<<ans2<<endl;
    }
    
    
return 0;
}