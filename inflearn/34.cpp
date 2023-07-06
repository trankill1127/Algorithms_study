//34. 버블정렬

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
			if (num[j] > num[j+1]) {
				tmp = num[j + 1];
				num[j + 1] = num[j];
				num[j] = tmp;
			}
		}
	}

	for (int i = 0; i < N; i++) cout << num[i] << " ";

	delete[] num;
	return 0;
}

//버블 정렬은 

//13 23 11 7 5 15
//13 11 23 7 5 15
//13 11 7 23 5 15
//13 11 7 5 23 15
//13 11 7 5 15 23

//11 13 7 5 15
//11 7 13 5 15
//11 7 5 13 15

//7 11 5 13
//7 5 11 13

//5 7 11