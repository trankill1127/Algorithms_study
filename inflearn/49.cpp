//49. 블록의 최대값

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
정면 -> j 고정, i의 최대
오른쪽 측면 -> i 고정, j의 최대

2 0 3 1
[][0][3][] 3
[2][0][][] 2
[][0][][] 1
[][0][][] 1
	
0인 데는 싹 다 0으로 설정한다
가로 새로 수가 동일하면 겹치는 지점은 그걸로 설정
다른 경우 더 작은 쪽에 맞춘다.
*/  