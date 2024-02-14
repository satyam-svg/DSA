#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
  int c=0;
    for (int i = 0; i < n; i++)
    {
           if(v[i]==1){
            c++;
           }
    }

    if(c==0){
        cout<<"EASY"<<endl;
    }else{
        cout<<"HARD"<<endl;
    }
    
    
return 0;
}