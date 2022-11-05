#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++)
        cin >> a[i];
    sort(a,a+3);
    string b;
    for(int i=0;i<3;i++)
        cin >> b[i];
    for(int i=0;i<3;i++){
        if(b[i]=='A')
            cout << a[0];
        else if(b[i]=='B')
            cout << a[1];
        else
            cout << a[2];
        if(i!=2)
            cout << " ";
    }
    return 0;
}