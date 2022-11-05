#include <stdio.h>
int main() {
    int n, a, sum = 0;
    int b[5] = {8, 6, 4, 2, 1};
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 5; j++) {
            scanf("%d", &a);
            sum += a*b[j];
        }
    }
    if(sum%8 == 0) {
        printf("%d", sum/8);
    }
    else {
        printf("%d", sum/8+1);
    }
    return 0;
}