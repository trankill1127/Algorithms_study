//22. �µ��� �ִ밪

#include<iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;

	int* nums = new int[N];
	for (int i = 0; i < N; i++) cin >> nums[i];

	int max_sum = -100 * N;
	int sum;
	for (int i = 0; i < N-K+1; i++) {
		sum = 0;
		for (int j = 0; j < K; j++) sum += nums[i + j];
		if (max_sum < sum) max_sum = sum;
	}

	cout << max_sum;

	delete[] nums;
	return 0;
}

//����1. ���� ����
//����2. ����4~5 ������ �� ������ ���� ������

