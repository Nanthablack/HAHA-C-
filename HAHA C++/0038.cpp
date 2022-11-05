#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d ", &n);
    vector<string> v;
    for(int i = 0; i < n; ++i){
        string txt;
        getline(cin, txt);
        v.push_back(txt);
    }
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    for(auto u : v){
        cout << u << '\n';
    }
    return 0;
}