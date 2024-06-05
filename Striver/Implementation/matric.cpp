#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n],b[m][n];
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
           a[i][j]=1;
       }
       
    }

        // 0 1 0
        // 1 1 1
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
       {
           cin>>b[i][j];

           if(b[i][j]==0){
            for (int k = 0; k < n; k++)
            {
                a[i][k]=0;
                
            }
            
            for (int k = 0; k < m; k++)
            {
                a[k][j]=0;
                
            }
            
            
           }
       }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
       {
int sum=0;
           if(b[i][j]==1){
            for (int k = 0; k < n; k++)
            {
                sum+=a[i][k];
                
            }
            
            for (int k = 0; k < m; k++)
            {
                sum+=a[k][j];
                
            }
            if(sum==0){
                cout<<"NO"<<endl;
                return 0;
            }
            
           }
       }
    }

       cout<<"YES"<<endl;
       for (int i = 0; i < m; i++)
       {
          for (int j = 0; j < n; j++)
          {
              cout<<a[i][j]<<" ";
          }
          cout<<endl;
          
       }
       
    
    
    
    
return 0;
}