#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
       cin>>v[i];
    }
       int count_odd=0;
       int count_even=0;
       int c=0;
       int count_ieven=0;
       int count_iodd=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]%2!=0){
            count_odd++;
        }else{
            count_even++;
        }
          if(i%2==0 && v[i]%2!=0){
            c++;
          }

          if(i%2==0){
            count_ieven++;

          }else{
            count_iodd++;
          }

    }

    if(count_iodd<count_odd || count_ieven<count_even){
       cout<<-1<<endl;
    }else{
        cout<<c<<endl;
    }
    
    
    
}
return 0;
}