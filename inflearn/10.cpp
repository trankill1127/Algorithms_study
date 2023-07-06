//10. ÀÚ¸´¼öÀÇ ÇÕ

#include<iostream>

using namespace std;

int digit_sum(int x);

int main() {
	int N;
	cin >> N;
	
	int* nums = new int[N];
	int* num_sum = new int[N];
	for (int i = 0; i < N; i++) { //O(N)
		cin >> nums[i];
		num_sum[i] = digit_sum(nums[i]);
	}

	int maxsum_idx=0;
	for (int i = 1; i < N; i++) { //O(N-1)=O(N)
		if (num_sum[maxsum_idx] < num_sum[i]) maxsum_idx = i;
		else if (num_sum[maxsum_idx] == num_sum[i]) {
			if (nums[maxsum_idx] < nums[i]) maxsum_idx = i;
		}
		else;
	}

	cout << nums[maxsum_idx];

	return 0;
}

int digit_sum(int x) {
	int sum = 0;
	
	while (x > 0) {
		sum += (x % 10);
		x /= 10;
	}

	return sum;
}