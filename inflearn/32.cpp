//32. 선택정렬

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* num = new int[N];
	for (int i = 0; i < N; i++) cin >> num[i];

	int tmp, min_idx;
	for (int i = 0; i < N-1; i++) {
		min_idx = i;
		for (int j = i + 1; j < N; j++) {
			if (num[min_idx] > num[j]) min_idx = j;
		}
		tmp = num[i];
		num[i] = num[min_idx];
		num[min_idx] = tmp;
	}

	for (int i = 0; i < N; i++) cout << num[i] << " ";

	delete[] num;
	return 0;
}

/*
선택 정렬은 첫 번째 자료를 두 번째 자료부터 마지막 자료까지 차례대로 비교하여 
가장 작은 값을 찾아 첫 번째에 놓고, 두 번째 자료를 세 번째 자료부터 마지막 자료까지와 
차례대로 비교하여 그 중 가장 작은 값을 찾아 두 번째 위치에 놓는 과정을 반복하며 
정렬을 수행한다
*/