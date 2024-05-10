#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    
   for (int i = 1; i <= n; i++)
   {
       int ans=(n-i)*i;
       sum+=ans;
   }
   cout<<sum+n;
   
    
return 0;
}