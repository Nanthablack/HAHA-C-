#include <bits/stdc++.h>
using namespace std;
int main(){
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    int a,b,c,d;
    bool chk = false;
    for(a = 1; a <= A; ++a){
        if(a == 0 || A%a != 0) continue;
        c = A/a;
        for(b = -10000; b <= 10000; ++b){
            if(b == 0) d == 0;
            else if(C%b != 0 && C != 0) continue;
            else d = C/b;
            if(B == (a*d + b*c)){
                printf("%d %d %d %d", a, b, c ,d);
                chk = true;
                break;
            }
        }
        if(chk) break;
    }
    if(!chk)
        printf("No Solution");
    return 0;
}