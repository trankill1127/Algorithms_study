//39. 두 배열 합치기

#include<iostream>
using namespace std;

int main() {
	int N, M;

	cin >> N;
	int* first = new int[N];
	for (int i = 0; i < N; i++) cin >> first[i];

	cin >> M;
	int* second = new int[M];
	for (int i = 0; i < M; i++) cin >> second[i];

	int* total = new int[N+M];
	int f_p = 0, s_p = 0, t_p=0;
	while ( f_p != N && s_p != M ) {
		if (first[f_p] <= second[s_p]) {
			total[t_p] = first[f_p];	
			f_p++;
		}
		else {
			total[t_p] = second[s_p];
			s_p++;
		}
		t_p++;
	}
	while (f_p != N) {
		total[t_p] = first[f_p];
		f_p++;
		t_p++;
	}
	while (s_p != M) {
		total[t_p] = second[s_p];
		s_p++;
		t_p++;
	}

	for (int i = 0; i < N+M; i++) cout << total[i] << " ";

	delete[] first;
	delete[] second;
	delete[] total;
	return 0;
}