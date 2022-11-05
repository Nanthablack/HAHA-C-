#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double ans;
    scanf("%d", &n);
    if(n&1){ //odd
        ans = n - 3 + 2*sqrt(3);
        if(n==1) ans = 2;
        else if(n==3) ans = 2+sqrt(3);
    } else { //even
        ans = n;
    }
    printf("%.6f", ans);
    return 0;
}