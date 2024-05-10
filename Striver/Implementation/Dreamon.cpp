#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ans;
    int res;
    vector<int>v;
    if(n%2==0){
        ans=n/2;
    }else{
        ans=n/2+1;
    }
    while(ans<=n){
        if(ans%m==0){
            v.push_back(ans);
                        ans=ans+1;
        }else{
            ans=ans+1;
        }
    }
     for(int i=0;i<v.size();i++){
     res=min(res,v[i]);
     }
    if(v.size()==0){
        cout<<-1<<endl;
    }else{
        cout<<res<<endl;
    }

return 0;
}