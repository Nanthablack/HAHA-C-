#include <stdio.h>
int main() {
    int w, h, n;
    scanf("%d %d %d", &w, &h, &n);
    int x, a;
    int f[w+1] = {}, ans1 = 0, ans2 = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d %d", &x, &a);
        for(int j = x; j < x+a && j < w; j++) {
            f[j]++;
        }
    }
    for(int i = 0; i < w; i++) {
        if(f[i] == 0) {
            ans1 += h;
        }
        else if(f[i] == 1) {
            ans2 += h;
        }
    }
    printf("%d %d", ans1, ans2);
    return 0;
}