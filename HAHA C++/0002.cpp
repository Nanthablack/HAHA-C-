#include<iostream>
using namespace std;
int main(){
    int min=0,max=0,a,n;
    cin >> n;
    cin >> a;
    min=a;
    max=a;
    for(int i=1;i<n;i++){
        cin >> a;
        if(max<a)
            max=a;
        if(min>a)
            min=a;
    }
    cout << min << "\n" << max;
    return 0;
}