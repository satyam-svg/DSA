#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,x;
    cin>>n>>x;
    int count=1;
    int floor=2;
    while(n>floor){
            floor+=x;
            count++;
         }
    if(n<=2){
        cout<<1<<endl;
    }else{
          cout<<count<<endl;
    }
}
return 0;
}