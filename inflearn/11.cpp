//11. ������ �� ����(small)

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int num_cnt = 0;
	int std;
	for (int i = 1; i < N + 1; i++) { //O(N)
		std = i;
		while (std > 0) {
			num_cnt++;
			std /= 10;
		}
	}

	cout << num_cnt;
	return 0;
}

/*
����1. ���� 0~9 ������ ������� �� �ʿ䰡 ����
����2. ���� ���� ���� small�̶� N�� ������ ���� ���� �ǹ�
*/
