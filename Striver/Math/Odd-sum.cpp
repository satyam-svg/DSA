#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    int co=0;
    int ce=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
for (int i = 0; i < n; i++)
{
    if(v[i]%2!=0){
        co++;
    }else{
        ce++;
    }
}


if((n%2==0  && co==n) || ce==n){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
}
    
    
    }
return 0;
}