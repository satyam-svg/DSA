#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    long long int a,b;
    cin>>a>>b;
    int q=a/b;
    if(a<b){
        cout<<b-a<<endl;
    }else if(a%b==0){
        cout<<0<<endl;
    }else{
        q=q+1;
        int ans=b*q;
        cout<<ans-a<<endl;
    }

   
}
return 0;
}