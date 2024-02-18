#include <iostream>
#include <unordered_set>

using namespace std;

int countDistinctChars(const string& inputString) {
    unordered_set<char> charSet(inputString.begin(), inputString.end());
    return charSet.size();
}

int main() {
    string inputStr;
    cin>>inputStr;
    int result = countDistinctChars(inputStr);
    if(result%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}
