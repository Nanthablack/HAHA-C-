#include<iostream>
using namespace std;
int gcd(int a,int b){
    int ans=1;
    for(int i=2;i<=min(a,b);i++){
        for(int j=0;;j++){
            if(a%i==0&&b%i==0){
                a/=i;
                b/=i;
                ans*=i;
            }
            else
                break;
        }
    }
    return ans;
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}