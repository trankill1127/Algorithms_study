//23. 연속 부분 증가수열

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* nums = new int[N];
	int max_len=1, len=1;
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
		if (i > 0) {
			if (nums[i - 1] <= nums[i]) len++;
			else {
				if (max_len < len) max_len = len;
				len = 1;
			}
		}
	}

	cout << max_len;

	delete[] nums;
	return 0;
}

//문제1. 복붙이 안되서 예제 2~4 검증 못 함