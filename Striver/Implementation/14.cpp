#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
while(k!=0){
    int lastdigit=n%10;
    if(lastdigit!=0){
        n=n-1;
    }else{
        n=n/10;
    }
    k--;
}

cout<<n<<endl;
return 0;
}