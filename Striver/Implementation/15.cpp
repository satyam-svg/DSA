#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    vector<int>v;
    int ans=0;
    for (int i = 1; i <= w; i++)
    {
        v.push_back(i*k);

    }
for (int i = 0; i < v.size(); i++)
{
    ans+=v[i];
}

    int result=ans-n;
    if(ans<=n){
        cout<<0<<endl;
    }else{
        cout<<result<<endl;
    }
    
return 0;
}