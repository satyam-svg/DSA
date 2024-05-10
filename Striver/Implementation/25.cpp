#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<int> zeroes;
        vector<int> ones;
        vector<int> consecutive;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                zeroes.push_back(i);
            }else{
                ones.push_back(i);
            }
        }
        int def=1;
          for (int i = 0; i < ones.size(); i++)
          {
              def=ones[i+1]-ones[i];
              cout<<def<<" ";
          }
          
        

        cout << endl;
    }
    return 0;
}
