#include<iostream>
using namespace std;
int main(){
    int a[10],co=0,b[42];
    for(int i=0; i<10; i++)
        cin >> a[i];
    for(int i=0; i<42; i++)
        b[i]=0;
    for(int i=0; i<10; i++)
        b[a[i]%42]=1;
    for(int i=0; i<42; i++)
        if(b[i]==1)
            co++;
    cout << co;
    return 0;
}