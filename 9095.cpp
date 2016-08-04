#include <stdio.h>
#include <iostream>
using namespace std;
//Dp의 정의 : index를 1,2,3의 합으로 나타내는 방법의 수
int Dp[12];
int main(void){
	int T;
	cin >> T;
	Dp[1] = 1;
	Dp[2] = 2;
	Dp[3] = 4;

	for (int i = 4; i <= 11; i++){
		Dp[i] = Dp[i - 1] + Dp[i - 2] + Dp[i - 3];
	}
	while (T--){
		int N;
		cin >> N;
		printf("%d\n", Dp[N]);
	}
}
