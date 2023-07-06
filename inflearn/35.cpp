//35. special sort

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* num = new int[N];
	for (int i = 0; i < N; i++) cin >> num[i];

	int tmp;
	for (int i = N; i > 0; i--) {
		for (int j = 0; j < i-1; j++) {
			if (num[j] > 0 && num[j + 1] < 0) {
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) cout << num[i] << " ";

	delete[] num;
	return 0;
}

//1 2 3 -3 -2 5 6 -6

//1 2 -3 3 -2 5 6 -6
//1 2 -3 -2 3 5 6 -6
//1 2 -3 -2 3 5 -6 6

//1 -3 2 -2 3 5 -6
//1 -3 -2 2 3 5 -6
//1 -3 -2 2 3 -6 5

//-3 1 -2 2 3 -6
//-3 -2 1 2 3 -6
//-3 -2 1 2 -6 3

//-3 -2 1 -6 2

//-3 -2 -6 1

//문제1. 어떤 상황에서 버블정렬을 사용하는 거지?