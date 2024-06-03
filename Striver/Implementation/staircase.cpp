#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count=0;
    int countone=0;
     for (int i = 0; i < s.size(); i++)
    {

         if(s[i]=='1'){
             countone++;
         }
    }
    for (int i = 0; i < s.size(); i++)
    {
        count++;
         if(s[i]=='1'){
            break;
         }
    }

    int c=0;
    for (int i = s.size()-1; i >=0; i--)
    {
         c++;
         if(s[i]=='1'){
            break;
         }
    }
    int ans=count-1;
    int final=c-1;
    int ans1=n*2-ans*2;
    int ans2=n*2-final*2;
    int res=max(ans1,ans2);
    if(countone==0){
        cout<<n<<endl;
    }else if(s[n-1]=='1'){
        cout<<n*2<<endl;
    }else{
       cout<<res<<endl;
    }
   
    
    
}
return 0;
}