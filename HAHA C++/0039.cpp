#include <bits/stdc++.h>
using namespace std;
int n, m;
char str[100] = {};
int forbid[8] = {};
void food(int dish){
    for(int i = 0; i < dish; ++i){
        for(int j = i+1; j < dish; ++j){
            if(str[i] == str[j])
                return;
        }
    }
    if(dish == n){
        for(int  i = 0; i < n; ++i)
            printf("%c ", str[i]);
        printf("\n");
        return;
    }
    for(int i = 1; i <= n; ++i){
        bool chk = true;
        if(dish == 0){
            for(int j = 0; j < m; ++j){
                if(i == forbid[j]){
                    chk = false;
                    break;
                }
            }
        }
        if(chk){
            str[dish] = i+'0';
            food(dish+1);
        }
    }
}
int main(){
    scanf("%d%d", &n, &m);
    for(int i = 0; i < m; ++i)
        scanf("%d", &forbid[i]);
    food(0);
    return 0;
}