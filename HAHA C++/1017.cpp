#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    bool ck[n*n+1] = {};
    int r[n] = {}, c[n] = {}, cr = 0, cl = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0, a; j < n; j++) {
            scanf("%d", &a);
            ck[a] = 1;
            r[i] += a;
            c[j] += a;
            if(i == j) {
                cr += a;
            }
            if(i+j == n-1) {
                cl += a;
            }
        }
    }
    bool chk = 0;
    for(int i = 0; i < n-1; i++) {
        if(r[i] != r[i+1] || c[i] != c[i+1]) {
            chk = 1;
            break;
        }
    }
    if(!chk) {
        if(r[0] != c[0] || cr != cl || c[0] != cr) {
            chk = 1;
        }
        if(!chk) {
            for(int i = 1; i <= n*n; i++) {
                if(!ck[i]) {
                    chk = 1;
                    break;
                }
            }
        }
    }
    printf("%s", chk ? "No" : "Yes");
    return 0;
}