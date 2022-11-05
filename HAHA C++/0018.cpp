#include<iostream>
using namespace std;
int main(){
    int N,K,co=0;
    cin >> N >> K;
    int a[N+1];
    for(int i=1;i<N+1;i++)
        a[i]=1;
    for(int i=2; i<N+1; i++){
        for(int j=i;j<N+1;j++){
            if(((j)%(i)==0)&&a[j]!=0){
                a[j]=0;
                co++;
                if(co==K){
                    cout << j;
                    break;
                }
            }
        }
        if(co==K)
            break;
    }
    return 0;
}