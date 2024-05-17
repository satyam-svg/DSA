#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s; // Read the string

    bool allupper=true;

    // Convert the rest of the letters to lowercase
    for (int i = 1; i < s.size(); i++)
    {
        allupper && isupper(s[i]);
    }

    if(allupper){
        for (int i = 1; i < s.size(); i++)
        {
            s[i]=tolower(s[i]);
            if(isupper(s[0])){
                s[0]=tolower(s[0]);
            }else{
                s[0]=toupper(s[0]);
            }
        }
        
    }
    cout<<s;

    return 0;
}
