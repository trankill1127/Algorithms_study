//38. Inversion sequence

#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;

	//inversion sequence
	int* after = new int[N];
	for (int i = 0; i < N; i++) cin >> after[i];

	//������ ����
	int* before = new int[N];
	for (int i = 0; i < N; i++) before[i] = 0;

	//��ȯ
	for (int i = N - 1; i >= 0; i--) {

		for (int j = N - 2; j >= after[i]; j--) {
			before[j+1] = before[j];
		}

		before[after[i]] = i + 1;

	}

	//������ ���� ���
	for (int i = 0; i < N; i++) cout << before[i] << " ";

	//�����Ҵ� ����
	delete[] before;
	delete[] after;
	return 0;
}

/*
5 3 4 0 2 1 1 0
1 �տ� �� ū �� 5�� : 4 8 6 2 5 1 3 7
2 �տ� �� ū �� 3�� : 4 8 6 2 5 3 7 
3 �տ� �� ū �� 4�� : 4 8 6 5 3 7
4 �տ� �� ū �� 0�� : 4 8 6 5 7
5 �տ� �� ū �� 2�� : 8 6 5 7
6 �տ� �� ū �� 1�� : 8 6 7
7 �տ� �� ū �� 1�� : 8 7 0 0 0 0 0 0
8 �տ� �� ū �� 0�� : 8
*/