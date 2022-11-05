#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    scanf("%d", &q);
    long double a;
    while(q--){
        int n;
        scanf("%d", &n);
        a = 1;
        while(n--) a*=2;
        printf("%.0llf\n", a);
    }
    return 0;
}
