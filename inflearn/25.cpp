//25. 석차 구하기

#include<iostream>
using namespace std;

typedef struct stu {
	int score;
	int rank;
};

int main() {
	int N;
	cin >> N;

	stu* cla = new stu[N];
	for (int i = 0; i < N; i++) {
		cin >> cla[i].score;
		cla[i].rank = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (cla[i].score < cla[j].score) cla[i].rank++;
		}
		cout << cla[i].rank << " ";
	}

	delete[] cla;
	return 0;
}