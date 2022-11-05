#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int tile[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &tile[i][j]);
        }
    }
    int ct = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(tile[i][j] == tile[i][j+1] && tile[i][j] == tile[i+1][j] && j+1 <= n-1 && j+1 <= n-1){
                if(tile[i][j+2] == tile[i][j] && j+2 <= n-1){
                    continue;
                }
                if(tile[i][j-1] == tile[i][j] && j-1 >= 0){
                    continue;
                }
                if(tile[i-1][j] == tile[i][j] && i-1 >= 0){
                    continue;
                }
                if(tile[i+1][j+1] == tile[i][j] && i+1 <= n-1 && j+1 <= n-1){
                    continue;
                }
                if(tile[i+2][j] == tile[i][j] && i+2 <= n-1){
                    continue;
                }
                if(tile[i-1][j+1] == tile[i][j] && i-1 >= 0 && j+1 <= n-1){
                    continue;
                }
                if(tile[i+1][j-1] == tile[i][j] && i+1 <= n-1 && j-1 >= 0){
                    continue;
                }
                ct++;
            }
            else if(tile[i][j] == tile[i+1][j] && tile[i][j] == tile[i+1][j-1] && i+1 <= n-1 && j-1 >= 0){
                if(tile[i][j+1] == tile[i][j] && j+1 <= n-1){
                    continue;
                }
                if(tile[i][j-1] == tile[i][j] && j-1 >= 0){
                    continue;
                }
                if(tile[i-1][j] == tile[i][j] && i-1 >= 0){
                    continue;
                }
                if(tile[i+1][j+1] == tile[i][j] && i+1 <= n-1 && j+1 <= n-1){
                    continue;
                }
                if(tile[i+2][j] == tile[i][j] && i+2 <= n-1){
                    continue;
                }
                if(tile[i+1][j-2] == tile[i][j] && i+1 <= n-1 && j-2 >= 0){
                    continue;
                }
                if(tile[i+2][j-1] == tile[i][j] && i+2 <= n-1 && j-1 >= 0){
                    continue;
                }
                ct++;
            }
            else if(tile[i][j] == tile[i][j+1] && tile[i][j] == tile[i+1][j+1] && i+1 <= n-1 && j+1 <= n-1){
                if(tile[i][j-1] == tile[i][j] && j-1 >= 0){
                    continue;
                }
                if(tile[i+1][j] == tile[i][j] && i+1 <= n-1){
                    continue;
                }
                if(tile[i][j+2] == tile[i][j] && j+2 <= n-1){
                    continue;
                }
                if(tile[i+1][j+2] == tile[i][j] && i+1 <= n-1 && j+2 <= n-1){
                    continue;
                }
                if(tile[i-1][j+1] == tile[i][j] && i-1 >= 0 && j+1 <= n-1){
                    continue;
                }
                if(tile[i-1][j] == tile[i][j] && i-1 >= 0){
                    continue;
                }
                if(tile[i+2][j+1] == tile[i][j] && i+2 <= n-1 && j+1 <= n-1){
                    continue;
                }
                ct++;
            }
            else if(tile[i][j] == tile[i+1][j] && tile[i][j] == tile[i+1][j+1] && j+1 <= n-1 && i+1 <= n-1){
                if(tile[i-1][j] == tile[i][j] && i-1 >= 0){
                    continue;
                }
                if(tile[i][j+1] == tile[i][j] && j+1 <= n-1){
                    continue;
                }
                if(tile[i+1][j+2] == tile[i][j] && i+1 <= n-1 && j+2 <= n-1){
                    continue;
                }
                if(tile[i+2][j+1] == tile[i][j] && i+2 <= n-1 && j+1 <= n-1){
                    continue;
                }
                if(tile[i+2][j] == tile[i][j] && i+2 <= n-1){
                    continue;
                }
                if(tile[i+1][j-1] == tile[i][j] && i+1 <= n-1){
                    continue;
                }
                if(tile[i][j-1] == tile[i][j] && j-1 >= 0){
                    continue;
                }
                ct++;
            }
        }
    }
    printf("%d", ct);;
    return 0;
}