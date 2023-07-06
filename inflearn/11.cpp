//11. 숫자의 총 개수(small)

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int num_cnt = 0;
	int std;
	for (int i = 1; i < N + 1; i++) { //O(N)
		std = i;
		while (std > 0) {
			num_cnt++;
			std /= 10;
		}
	}

	cout << num_cnt;
	return 0;
}

/*
문제1. 굳이 0~9 각각이 몇개인지는 알 필요가 없음
문제2. 문제 옆에 적힌 small이란 N의 범위가 작은 경우란 의미
*/
