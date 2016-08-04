#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
//Dp의 정의 : index 개를 가지고 얻을 수 있는 최대수익
int Dp[1001];
int Price[1001];
int main(void){
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++){
		cin >> Price[i];
	}
	for (int i = 1; i <= N; i++){
		for (int j = 1; j <= i; j++){
			Dp[i] = max(Price[j] + Dp[i - j], Dp[i]);
		}
	}
	printf("%d", Dp[N]);
}
