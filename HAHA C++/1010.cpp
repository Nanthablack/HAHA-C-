#include <stdio.h>
int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    char table[m][n+1];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf(" %c", &table[i][j]);
            if(table[i][j] >= 'a' && table[i][j] <= 'z') {
                table[i][j] -= 32;
            }
        }
    }
    int q, l;
    scanf("%d", &q);
    char kw[16];
    for(; q--;) {
        l = 0;
        scanf("%s", kw);
        for(int i = 0; kw[i] != 0; i++) {
            if(kw[i] >= 'a' && kw[i] <= 'z') {
                kw[i] -= 32;
            }
            l++;
        }
        for(int i = 0; i < m ; i++) {
            for(int j = 0; j < n ; j++) {
                int x;
                bool ck = 0;
                for(x = 0; kw[x] != 0 && i-x >= 0; x++) {
                    if(kw[x] != table[i-x][j]) {
                        ck = 1;
                        break;
                    }
                }
                if(!ck && x == l) {
                    printf("%d %d\n", i, j);
                    i = m;
                    j = n;
                }
                ck = 0;
                for(x = 0; kw[x] != 0 && i+x < m; x++) {
                    if(kw[x] != table[i+x][j]) {
                        ck = 1;
                        break;
                    }
                }
                if(!ck && x == l) {
                    printf("%d %d\n", i, j);
                    i = m;
                    j = n;
                }
                ck = 0;
                for(x = 0; kw[x] != 0 && j-x >= 0; x++) {
                    if(kw[x] != table[i][j-x]) {
                        ck = 1;
                        break;
                    }
                }
                if(!ck && x == l) {
                    printf("%d %d\n", i, j);
                    i = m;
                    j = n;
                }
                ck = 0;
                for(x = 0; kw[x] != 0 && j+x < n; x++) {
                    if(kw[x] != table[i][j+x]) {
                        ck = 1;
                        break;
                    }
                }
                if(!ck && x == l) {
                    printf("%d %d\n", i, j);
                    i = m;
                    j = n;
                }
                ck = 0;
                for(x = 0; kw[x] != 0 && i-x >= 0 && j-x >= 0; x++) {
                    if(kw[x] != table[i-x][j-x]) {
                        ck = 1;
                        break;
                    }
                }
                if(!ck && x == l) {
                    printf("%d %d\n", i, j);
                    i = m;
                    j = n;
                }
                ck = 0;
                for(x = 0; kw[x] != 0 && i-x >= 0 && j+x < n; x++) {
                    if(kw[x] != table[i-x][j+x]) {
                        ck = 1;
                        break;
                    }
                }
                if(!ck && x == l) {
                    printf("%d %d\n", i, j);
                    i = m;
                    j = n;
                }
                ck = 0;
                for(x = 0; kw[x] != 0 && i+x < m && j-x >= 0; x++) {
                    if(kw[x] != table[i+x][j-x]) {
                        ck = 1;
                        break;
                    }
                }
                if(!ck && x == l) {
                    printf("%d %d\n", i, j);
                    i = m;
                    j = n;
                }
                ck = 0;
                for(x = 0; kw[x] != 0 && i+x < m && j+x < n; x++) {
                    if(kw[x] != table[i+x][j+x]) {
                        ck = 1;
                        break;
                    }
                }
                if(!ck && x == l) {
                    printf("%d %d\n", i, j);
                    i = m;
                    j = n;
                }
            }
        }
    }
    return 0;
}