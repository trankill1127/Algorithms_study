//19. �г� ������

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* stu = new int[N];
	for (int i = 0; i < N; i++) cin >> stu[i];
	
	int cnt = 0;
	int flag = true;
	for (int i = 0; i < N-1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (stu[i] <= stu[j]) {
				flag = false;
				break;
			}
		}
		if (flag) cnt++;
		flag = true;
	}

	cout << cnt;
	delete[] stu;
	return 0;
}

//����1. ������ ����� �� �о���.