#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, k, l, c;
    long long int cost = 0;
    scanf("%d%d%d%d%d", &n,&m, &k, &l, &c);
    for(int i = 0; i < n *m; ++i){
        int x;
        scanf("%d", &x);
        cost += x;
    }
    cost += k*l*c;
    printf("%lld", cost/c + (cost%c==0 ? 0 : 1));
    return 0;
}