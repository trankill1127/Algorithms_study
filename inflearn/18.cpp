//18. Ãþ°£¼ÒÀ½

#include<iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;

	int* rec = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> rec[i];
	}

	int max_cnt = 0;
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (rec[i] > M) cnt++;
		else {
			if (cnt > max_cnt) max_cnt = cnt;
			cnt = 0;
		}
	}
	if (cnt > max_cnt) max_cnt = cnt;

	cout << max_cnt;

	delete[] rec;
	return 0;
}