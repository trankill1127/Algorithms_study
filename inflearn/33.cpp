//33. 3등의 성적은?

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* num = new int[N];
	for (int i = 0; i < N; i++) cin >> num[i];
	
	//정렬
	int tmp;
	int max_idx;
	for (int i = 0; i < N; i++) {
		max_idx = i;
		for (int j = i + 1; j < N; j++) {
			if (num[max_idx] < num[j]) max_idx = j;
		}
		tmp = num[i];
		num[i] = num[max_idx];
		num[max_idx] = tmp;
	}

	int rank = 1;
	for (int i = 1; i < N; i++) {
		if (num[i - 1] > num[i]) rank++;
		if (rank == 3) {
			cout << num[i];
			break;
		}
	}

	delete[] num;
	return 0;
}