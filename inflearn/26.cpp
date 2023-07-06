//26. 마라톤

#include<iostream>
using namespace std;

typedef struct player {
	int ability;
	int rank;
};

int main() {
	int N;
	cin >> N;

	player* Ps = new player[N];
	for (int i = 0; i < N; i++) {
		cin >> Ps[i].ability;
		Ps[i].rank = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = i-1; j >= 0; j--) {
			if (Ps[i].ability <= Ps[j].ability) Ps[i].rank++;
		}
		cout << Ps[i].rank << " ";
	}

	delete[] Ps;
	return 0;
}

//문제1. 복붙 문제로 예제 4~5는 검증하지 못 했음