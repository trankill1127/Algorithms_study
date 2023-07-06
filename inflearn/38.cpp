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

	//원래의 수열
	int* before = new int[N];
	for (int i = 0; i < N; i++) before[i] = 0;

	//변환
	for (int i = N - 1; i >= 0; i--) {

		for (int j = N - 2; j >= after[i]; j--) {
			before[j+1] = before[j];
		}

		before[after[i]] = i + 1;

	}

	//원래의 수열 출력
	for (int i = 0; i < N; i++) cout << before[i] << " ";

	//동적할당 해제
	delete[] before;
	delete[] after;
	return 0;
}

/*
5 3 4 0 2 1 1 0
1 앞에 더 큰 게 5개 : 4 8 6 2 5 1 3 7
2 앞에 더 큰 게 3개 : 4 8 6 2 5 3 7 
3 앞에 더 큰 게 4개 : 4 8 6 5 3 7
4 앞에 더 큰 게 0개 : 4 8 6 5 7
5 앞에 더 큰 게 2개 : 8 6 5 7
6 앞에 더 큰 게 1개 : 8 6 7
7 앞에 더 큰 게 1개 : 8 7 0 0 0 0 0 0
8 앞에 더 큰 게 0개 : 8
*/