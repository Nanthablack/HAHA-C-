#include<iostream>
using namespace std;
int main(){
    int a[9],sum =0,out,c=0;
    for(int i=0; i<9; i++){
        cin >> a[i];
        sum += a[i];
    }
    //cout << sum;
    out = sum-100;
    //cout << out;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<9; j++){
            if((a[i]+a[j])==out){
                a[i]=0;
                a[j]=0;
                c=1;
                break;
            }
        }
        if(c==1)
            break;
    }
    for(int i=0; i<9; i++){
        if(a[i]!=0)
            cout << a[i];
        if(i!=8&&a[i]!=0)
            cout << "\n";
    }
    return 0;
}