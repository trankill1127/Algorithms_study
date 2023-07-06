//43. 뮤직비디오

#include<iostream>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int* rec = new int[N];
	for (int i = 0; i < N; i++) cin >> rec[i];

	int sto_low = 0, sto_high = 0;
	for (int i = 0; i < N; i++) {
		sto_high += rec[i];
		if (rec[i] > sto_low) sto_low = rec[i];
	}

	int answer = sto_high;
	int cnt, storage, sum, i;
	while (sto_low <= sto_high) {

		storage = (sto_low + sto_high) / 2;

		cnt = 0;
		sum = 0;
		i = 0;
		while (i < N) {

			if (sum + rec[i] <= storage) {
				sum += rec[i];
			}
			else {
				cnt++;
				sum = rec[i];
				if (N - i == M - cnt) {
					cnt += (M - cnt - 1);
					break;
				}
			}

			i++;
		}
		cnt++;

		if (cnt < M) sto_high = storage - 1;
		else if (cnt == M) {
			if (storage < answer) answer = storage;
			sto_high = storage - 1;
		}
		else sto_low = storage + 1;

	}

	cout << answer;

	delete[] rec;
	return 0;
}

/*
1. 투 포인터 방식
8C2=28

2. 이분탐색 방식
정답의 범위가 정해져있는 상황
*/

//문제1. 아예 문제 감을 못 잡음
//문제2. 예제 1번 에러