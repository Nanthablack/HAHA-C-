#include<iostream>
#include<string>
using namespace std;
int main(){
    int c=0,l=0;
    string a;
    cin >> a;
    for(int i=0;i<a.length();i++){
        if(a[i]<91){
            c++;
        }
        if(a[i]>96){
            l++;
        }
        if(c>0&&l>0){
            cout << "Mix";
            break;
        }
    }
    if(l==0){
            cout << "All Capital Letter";
        }
    else if(c==0){
            cout << "All Small Letter";
        }
    return 0;
}