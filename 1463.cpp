#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
//Dp의 정의 : index를 1으로 만드는 경우의 수
int Dp[1231231];
int main(void){
	int N;
	cin >> N;
	Dp[1] = 0;
	Dp[2] = 1;
	Dp[3] = 1;
	for (int i = 4; i <= N; i++){
		Dp[i] = Dp[i - 1] + 1;
		if (i % 3 == 0){
			Dp[i] = min(Dp[i / 3] + 1, Dp[i]);
		}
		if (i % 2 == 0){
			Dp[i] = min(Dp[i / 2] + 1, Dp[i]);
		}
	}
	printf("%d", Dp[N]);
}
