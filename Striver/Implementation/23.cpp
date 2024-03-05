#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b=0;
    int c=0;
    while(c<=a){
        b=b+1;
        c=c+((b*(b+1))/2);
    }
    cout<<b-1;
return 0;
}