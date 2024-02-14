#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int max_e = INT_MIN;
    int min_e = INT_MAX; // Initialize min_e with INT_MAX to find the minimum element

    int max_index = -1; // Initialize max_index with -1
    int min_index = -1; // Initialize min_index with -1
    int c = 0; // Counter for the minimum element
    int c1 = 0; // Counter for the maximum element
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max_e)
        {
            max_e = v[i];
            max_index = i;
            c1 = 1;
        }

        if (v[i] < min_e)
        {
            min_e = v[i];
            min_index = i;
            c = 1; 
        }
        else if (v[i] == min_e)
        {
            c++; 
            min_index = i;
        }
        
    }

    int result = (max_index-1)+ abs(min_index-n);
    if(v[0]==max_e && v[n-1]==min_e){
        cout<<0<<endl;
    }
    else  if (max_index > min_index)
    {
        int ans1 = abs(max_index - 1);
        int ans2 = abs(min_index - n);
        result = (ans1 + 1) + (ans2 - 1);
        cout << result - 1 << endl;
    }
    else
    {
        cout  << result << endl;
    }

    return 0;
}
