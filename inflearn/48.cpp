//48. 각 행의 평균과 가장 가까운 값

#include<iostream>
#include <cmath>
using namespace std;

int main() {

	//동적 할당
	int** nums = new int*[9];
	for (int i = 0; i < 9; i++) {
		nums[i] = new int[9];
	}

	//입력
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> nums[i][j];
		}
	}

	int sum, avg, nearest;
	for (int i = 0; i < 9; i++) {
		sum = 0;

		for (int j = 0; j < 9; j++) {
			sum += nums[i][j];
		}
		avg = round(float(sum) / 9);

		nearest = nums[i][0];
		for (int j = 1; j < 9; j++) {
			if (abs(nums[i][j] - avg) < abs(nearest - avg)) {
				nearest = nums[i][j];
			}
			else if (abs(nums[i][j] - avg) == abs(nearest - avg)) {
				if (nums[i][j] > nearest) nearest = nums[i][j];
			}
		}

		cout << avg << " " << nearest << endl;
	}

	//동적 할당 해제
	for (int i = 0; i < 9; i++) {
		delete[] nums[i];
	}
	delete[] nums;

	return 0;
}

/*
1.
절대값 구하기

2.
소수점이 나오는 나눗셈

3.
첫째자리에서 반올림하기

4.
값의 차가 동일한 것들일 시 더 큰 것을 선택
*/