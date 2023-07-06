//36. 삽입정렬

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* num = new int[N];
	for (int i = 0; i < N; i++) cin >> num[i];

	int key;
	int j;
	for (int i = 1; i < N; i++) {
		key = num[i];
		for (j = i-1; j >= 0; j--) {
			if (num[j] < key) break;
			num[j+1] = num[j];
		}
		num[j+1] = key;
	}

	for (int i = 0; i < N; i++) cout << num[i] << " ";

	delete[] num;
	return 0;
}

//문제1. 원리 까먹어서 인터넷 참고함.
