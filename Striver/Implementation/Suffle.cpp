#include <bits/stdc++.h>
using namespace std;
bool isShuffleOfAnother(string s1, string s2) {
    if (s1.size() != s2.size()) return false;

    vector<int> count1(26, 0), count2(26, 0);

    for (char c : s1) {
        count1[c - 'a']++;
    }

    for (char c : s2) {
        count2[c - 'a']++;
    }

    return count1 == count2;
}

vector<string> getAllSubstrings(const string &str) {
    int n = str.length();
    vector<string> substrings;
    for (int i = 0; i < n; ++i) {
        for (int len = 1; len <= n - i; ++len) {
            substrings.push_back(str.substr(i, len));
        }
    }
    return substrings;
}

int main() {
   int t;
   cin>>t;
   while(t--){
       string p1,h1;
       cin>>p1>>h1;
       bool flag=false;
       vector<string> v = getAllSubstrings(h1);
      for (int i = 0; i < v.size(); i++)
      {
        if(isShuffleOfAnother(p1,v[i])){
            flag=true;
        }
      }
      if(flag){
        cout<<"YES"<<endl;
      }else{
        cout<<"NO"<<endl;
      }
   }
}
