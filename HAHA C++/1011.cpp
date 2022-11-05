#include <stdio.h>
void sw(char &a, char &b) {
    char t = a;
    a = b;
    b = t;
}
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    char table[m][n+1];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf(" %c", &table[i][j]);
        }
    }
    int l;
    scanf("%d", &l);
    int x, y, score = 0;
    char d;
    for(; l--;) {
        scanf(" %d %d %c", &x, &y, &d);
        if(table[x][y] == '#' || table[x][y] == '-' || x < 0 || y < 0 || x >= m || y >= n) {
            score -= 5;
            continue;
        }
        if(d == 'L') {
            if(table[x][y-1] != '-' || y-1 < 0) {
                score -= 5;
                continue;
            }
            sw(table[x][y], table[x][y-1]);
        }
        else {
            if(table[x][y+1] != '-' || y+1 >= n) {
                score -= 5;
                continue;
            }
            sw(table[x][y], table[x][y+1]);
        }
        bool chk = 1;
        for(; chk;) {
            chk = 0;
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < n; j++) {
                    int x = 0;
                    bool ck = 0;
                    if(table[i][j] >= 'A' && table[i][j] <= 'C') {
                        for(; table[i+x+1][j] == '-' && i+x+1 < m; x++) {
                            sw(table[i+x+1][j], table[i+x][j]);
                            chk = 1;
                        }
                        if(table[i+x+1][j] == table[i+x][j] && i+x+1 < m) {
                            ck = 1;
                            score += 5;
                            table[i+x+1][j] = '-';
                            chk = 1;
                        }
                        if(table[i+x][j-1] == table[i+x][j] && j-1 >= 0) {
                            ck = 1;
                            score += 5;
                            table[i+x][j-1] = '-';
                            chk = 1;
                        }
                        if(table[i+x][j+1] == table[i+x][j] && j+1 < n) {
                            ck = 1;
                            score += 5;
                            table[i+x][j+1] = '-';
                            chk = 1;
                        }
                        if(ck) {
                            score += 5;
                            table[i+x][j] = '-';
                            chk = 1;
                        }
                    }
                }
            }
        }
    }
    printf("%d\n", score);
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%c ", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}