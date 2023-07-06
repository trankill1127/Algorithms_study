//49. ����� �ִ밪

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int** board = new int*[N];
	for (int i = 0; i < N; i++) {
		board[i] = new int[N];
	}

	int * front = new int[N];
	for (int i = 0; i < N; i++) cin >> front[i];
	int * right = new int[N];
	for (int i = 0; i < N; i++) cin >> right[i];

	int max_bs = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (front[i] <= right[j]) board[i][j] = front[i];
			else board[i][j] = right[j];

			max_bs += board[i][j];
		}
	}
	cout << max_bs;

	delete[] front;
	delete[] right;
	for (int i = 0; i < 9; i++) {
		delete[] board[i];
	}
	delete[] board;

	return 0;
}

/*
���� -> j ����, i�� �ִ�
������ ���� -> i ����, j�� �ִ�

2 0 3 1
[][0][3][] 3
[2][0][][] 2
[][0][][] 1
[][0][][] 1
	
0�� ���� �� �� 0���� �����Ѵ�
���� ���� ���� �����ϸ� ��ġ�� ������ �װɷ� ����
�ٸ� ��� �� ���� �ʿ� �����.
*/  