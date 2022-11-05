#include <stdio.h>
int main() {
    int fr = 0, to = 0, ma = 0, st = 0, en = 0;
    char a[200], b[200];
    scanf("%s %s", a, b);
    for(int i = 0; a[i] != 0; i++) {
        for(int j = 0; b[j] != 0; j++) {
            fr = i;
            for(int k = 0; a[i+k] != 0 && b[j+k] != 0 && a[i+k] == b[j+k]; k++) {
                to = i+k;
            }
            if(ma < to-fr) {
                ma = to-fr;
                st = fr;
                en = to;
            }
        }
    }
    for(int i = st; i <= en; i++) {
        printf("%c", a[i]);
    }
    return 0;
}