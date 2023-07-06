//47. ���츮

#include<iostream>
using namespace std;

int main() {

	int N;
	cin >> N;

	//���� �Ҵ�
	int** Hs = new int*[N + 2];
	for (int i = 0; i < N + 2; i++) {
		Hs[i] = new int[N + 2];
	}

	//���� �Է�
	for (int i = 0; i < N + 2; i++) {
		for (int j = 0; j < N + 2; j++) {
			if (i == 0 || i == N + 1 || j == 0 || j == N + 1) {
				Hs[i][j] = 0;
			}
			else {
				cin >> Hs[i][j];
			}
		}
	}

	int cnt = 0;
	for (int i = 1; i < N + 1; i++) {

		for (int j = 1; j < N + 1; j++) {
			if (Hs[i][j]>Hs[i][j-1]
				&& Hs[i][j] > Hs[i][j+1]
				&& Hs[i][j] > Hs[i-1][j]
				&& Hs[i][j] > Hs[i+1][j]) cnt++;
		} 
	}

	cout << cnt;

	//���� �Ҵ� ����
	for (int i = 0; i < N + 2; i++) {
		delete[] Hs[i];
	}
	delete[] Hs;

	return 0;
}