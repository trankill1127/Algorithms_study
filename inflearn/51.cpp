//51. 영지선택(large)

#include<iostream>
using namespace std;

int land[701][701] = { 0 };
int land_sum[701][701] = { 0 };

int main() {
	int H, W;
	cin >> H >> W;

	for (int i = 1; i < H + 1; i++) {
		for (int j = 1; j < W + 1; j++) {
			cin >> land[i][j];
			land_sum[i][j] = land_sum[i - 1][j] + land_sum[i][j - 1] - land_sum[i - 1][j - 1] + land[i][j];
		}
	}

	int t_H, t_W;
	cin >> t_H >> t_W;

	int max_sum = 0, sum = 0;
	for (int i = t_H; i < H + 1; i++) {
		for (int j = t_W; j < W + 1; j++) {
			sum = land_sum[i][j] - land_sum[i][j - t_W] - land_sum[i - t_H][j] + land_sum[i - t_H][j - t_W];

			if (max_sum < sum) max_sum = sum;
		}
	}

	cout << max_sum;

	return 0;
}
/*
1. 
효율적인 코드 짜기 실패... 
강의 참고함

2. 
[701][701]의 경우 메모리 문제로 인해 main 내부에서 선언이 불가능하다.
전역으로 선언하도록 하자.
*/