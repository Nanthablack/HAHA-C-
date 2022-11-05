#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    char key[3];
    int a, dir = 1;
    int x = 0, y = 0;
    for(int i = 0; i < n; i++) {
        scanf("%s %d", key, &a);
        if(key[0] == 'L' && key[1] == 'T') {
            dir--;
        }
        else if(key[0] == 'R' && key[1] == 'T') {
            dir++;
        }
        else if(key[0] == 'B' && key[1] == 'W') {
            dir += 2;
        }
        if(dir > 4) {
            dir -= 4;
        }
        else if(dir <= 0) {
            dir += 4;
        }
        switch(dir) {
        case 1 :
            x += a;
            break;
        case 2 :
            y -= a;
            break;
        case 3 :
            x -= a;
            break;
        default :
            y += a;
            break;
        }
        if(x >= 50000 || x <= -50000 || y >= 50000 || y <= -50000) {
            printf("DEAD");
            return 0;
        }
    }
    printf("%d %d\n", x, y);
    switch(dir) {
    case 1 :
        printf("E");
        break;
    case 2 :
        printf("S");
        break;
    case 3 :
        printf("W");
        break;
    default :
        printf("N");
        break;
    }
    return 0;
}
