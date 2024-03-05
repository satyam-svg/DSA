#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int lastdigit=n%10;
    vector<int>v;
    while(n>0){
       int las=n%10;
       v.push_back(las);
       n=n/10;
    }
    int n1=v.size();
    int ans=10*(lastdigit-1);
    int ans1=(n1*(n1+1))/2;
    int result=ans+ans1;
    cout<<result<<endl;
}
return 0;
}