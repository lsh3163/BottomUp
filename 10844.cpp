#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#define size 1000000000
using namespace std;
int Dp[123][10];
int main(){
	for (int i = 1; i <= 9; i++){
		Dp[1][i] = 1;
	}
	int N;
	cin >> N;
	for (int i = 2; i <= N; i++){
		for (int j = 0; j <= 9; j++){
			if (j == 0){
				Dp[i][j] = Dp[i - 1][1];
			}
			else if (j >= 1 && j <= 8){
				Dp[i][j] = Dp[i - 1][j - 1] + Dp[i - 1][j + 1];
			}
			else{
				Dp[i][j] = Dp[i - 1][8];
			}
			Dp[i][j] %= size;
		}
	}
	int sum = 0;
	for (int i = 0; i <= 9; i++){
		sum += Dp[N][i];
		sum %= size;
	}
	printf("%d", sum);
}
