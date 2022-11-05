#include <stdio.h>
#include <string.h>
void Expression(char s[], int a, int &fr, int &to, int c) {
    int op1[65] = {}, op2[65] = {}, op3[65] = {}, paren = 0, cop1 = 0, cop2 = 0, cop3 = 0;
    for(int i = fr; i <= to; i++) {
        if(s[i] == '(') {
            paren++;
        }
        else if(s[i] == ')') {
            paren--;
        }
        else if(paren == 0) {
            if(s[i] == '+') {
                op1[cop1++] = i;
            }
            else if(s[i] == '*') {
                op2[cop2++] = i;
            }
            else if(s[i] == '^') {
                op3[cop3++] = i;
            }
        }
    }
    if(cop1 > 0) {
        if(a > cop1+1) {
            fr = to+1;
            return;
        }
        else if(a == 1) {
            to = op1[0]-1;
            return;
        }
        else if(a > 1 && a-1 < cop1) {
            fr = op1[a-2]+1;
            to = op1[a-1]-1;
            return;
        }
        else {
            fr = op1[a-2]+1;
            return;
        }
    }
    else if(cop2 > 0) {
        if(a > cop2+1) {
            fr = to+1;
            return;
        }
        else if(a == 1) {
            to = op2[0]-1;
            return;
        }
        else if(a > 1 && a-1 < cop2) {
            fr = op2[a-2]+1;
            to = op2[a-1]-1;
            return;
        }
        else {
            fr = op2[a-2]+1;
            return;
        }
    }
    else if(cop3 > 0) {
        if(a > cop3+1) {
            fr = to+1;
            return;
        }
        else if(a == 1) {
            to = op3[0]-1;
            return;
        }
        else if(a > 1 && a-1 < cop3) {
            fr = op3[a-2]+1;
            to = op3[a-1]-1;
            return;
        }
        else {
            fr = op3[a-2]+1;
            return;
        }
    }
    else if(s[fr] == '(' && s[to] == ')' && c > 0) {
        if(a == 1) {
            fr++;
            to--;
            return;
        }
        else {
            fr = to+1;
            return;
        }
    }
    else if(a == 1) {
        return;
    }
    else {
        fr = to+1;
        return;
    }
}
int main() {
    char s[65];
    scanf("%s", s);
    int n;
    scanf("%d", &n);
    int l = strlen(s);
    int a[65];
    for(int i = 0; i < n; i++) {
        int j, fr = 0, to = l-1;
        for(j = 0;; j++) {
            scanf("%d", &a[j]);
            if(a[j] == 0) {
                break;
            }
            Expression(s, a[j], fr, to, j);
        }
        for(int k = j-1; k >= 0; k--) {
            printf("op(%d,", a[k]);
        }
        printf("p");
        for(int k = j-1; k >= 0; k--) {
            printf(")");
        }
        printf("=");
        if(fr > to) {
            printf("null");
        }
        else {
            for(int k = fr; k <= to; k++) {
                printf("%c", s[k]);
            }
        }
        printf("\n");
    }
    return 0;
}