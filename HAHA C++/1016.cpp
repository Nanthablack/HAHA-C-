#include <stdio.h>
#include <math.h>
int main() {
    double x = 0, y = 0;
    char a[6];
    for(;;) {
        scanf("%s", a);
        if(a[0] == '*') {
            break;
        }
        int num = 0, i;
        for(i = 0; a[i] >= '0' && a[i] <= '9'; i++) {
            num *= 10;
            num += a[i]-48;
        }
        if(a[i] == 'N') {
            if(a[i+1] == 'E') {
                x += num/sqrt(2);
                y += num/sqrt(2);
            }
            else if(a[i+1] == 'W') {
                x -= num/sqrt(2);
                y += num/sqrt(2);
            }
            else {
                y += num;
            }
        }
        else if(a[i] == 'E') {
            x += num;
        }
        else if(a[i] == 'S') {
            if(a[i+1] == 'E') {
                x += num/sqrt(2);
                y -= num/sqrt(2);
            }
            else if(a[i+1] == 'W') {
                x -= num/sqrt(2);
                y -= num/sqrt(2);
            }
            else {
                y -= num;
            }
        }
        else {
            x -= num;
        }
    }
    printf("%.3lf %.3lf\n%.3lf", x, y, sqrt(x*x+y*y));
    return 0;
}