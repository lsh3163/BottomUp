#include<stdio.h>
const int MAX_N = 100000;
int t, n, a[2][MAX_N + 1], dp[2][MAX_N + 1];
int max(int x, int y){ return x > y ? x : y; }
int main(){
    scanf("%d", &t);
    while (t--){
        scanf("%d", &n);
        for (int i = 0; i < 2; i++)
            for (int j = 1; j <= n; j++)
                scanf("%d", &a[i][j]);
        for (int i = 1; i <= n; i++){
            dp[0][i] = max(dp[0][i - 1], dp[1][i - 1] + a[0][i]);
            dp[1][i] = max(dp[1][i - 1], dp[0][i - 1] + a[1][i]);
        }
        printf("%d\n", max(dp[0][n], dp[1][n]));
    }
    return 0;
}
