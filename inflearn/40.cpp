//40. 교집합

#include<iostream>
using namespace std;

int main() {
	int N, M;
	int tmp;
	int min_idx;

	cin >> N;
	int* A = new int[N];
	for (int i = 0; i < N; i++) cin >> A[i];
	for (int i = 0; i < N; i++) {
		min_idx = i;
		for (int j = i + 1; j < N; j++) {
			if (A[min_idx] > A[j]) min_idx = j;
		}
		tmp = A[i];
		A[i] = A[min_idx];
		A[min_idx] = tmp;
	}

	cin >> M;
	int* B = new int[M];
	for (int i = 0; i < M; i++) cin >> B[i];
	for (int i = 0; i < M; i++) {
		min_idx = i;
		for (int j = i + 1; j < M; j++) {
			if (B[min_idx] > B[j]) min_idx = j;
		}
		tmp = B[i];
		B[i] = B[min_idx];
		B[min_idx] = tmp;
	}

	int* intersection = NULL;
	if (N<=M) intersection = new int[N];
	else intersection = new int[M];
	
	int a_p = 0, b_p = 0, i_p=0;
	while (a_p != N && b_p != M ) {
		if (A[a_p] < B[b_p]) a_p++;
		else if (A[a_p] > B[b_p]) b_p++;
		else {
			intersection[i_p] = A[a_p];
			a_p++;
			b_p++;
			i_p++;
		}
	}

	for (int i = 0; i < i_p; i++) cout << intersection[i] << " ";

	delete[] A;
	delete[] B;
	delete[] intersection;
	return 0;
}

//A=B인 경우 i에 추가
//A<B인 경우 A++
//A>B인 경우 B++ 

/*
2 3 5 7 10
3 5 10 12 17

3 5 10
*/

//문제1. 복붙 문제로 예제 3~5 확인 못 함