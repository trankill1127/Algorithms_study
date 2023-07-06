//24. jolly jumpers

/*
#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* nums = new int[N];
	int* diffs = new int[N];
	for (int i = 0; i < N; i++) diffs[i] = 0;

	for (int i = 0; i < N; i++) {
		cin >> nums[i];

		if (i > 0) {
			if (abs(nums[i] - nums[i - 1]) < N)
				diffs[abs(nums[i] - nums[i - 1])] = 1;
		}
	}

	bool flag = true;
	for (int i = 1; i < N; i++) {
		if (diffs[i] == 0) {
			flag = false;
			break;
		}
	}
	if (flag) cout << "YES";
	else cout << "NO";
	
	delete[] nums;
	delete[] diffs;
	return 0;
}
*/

//����1. ���ڷ� ������ int�� ���밪�� ��ȯ���ִ� �Լ� abs

//����2. ����5 �Է� �� ������� ������ ����.
//diffs�� N-1�� ũ��� �����ߴµ� �� ���� ���� �� ������ �Ѿ�� ��쿡 ������ �߻�



#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* num = new int[N + 1];
	for (int i = 1; i < N + 1; i++) cin >> num[i];
	
	int* isChecked = new int[N];
	for (int i = 1; i < N; i++) {
		int idx = abs(num[i + 1]-num[i]);
		if (idx<N) isChecked[idx] = 1;
	}

	int cnt = 0;
	for (int i = 1; i < N; i++) {
		if (isChecked[i] == 1) cnt++;
	}

	if (cnt == N - 1) cout << "YES";
	else cout << "NO";

	delete[] num;
	delete[] isChecked;
	return 0;
}

/*

��� ���� ���ϴ� �� ������ �ؾ� ��
���� �����ϴ� ����� ��� �ұ ����
1~N-1������ �ε����� �ϴ� �迭�� �����
���� �߰��� ������ 1�� ��ȯ
���߿� ��ü������ �˻��ؼ� 0�� �ֵ��� ������ NO

# ����� ��.
���밪�� ���ϴ� �Լ� abs�� cmath ������Ͽ� ���ԵǾ� �ִ�.

# ����1.
�ΰ��� ���� 1~N-1�� ������ ����� ��� ���� �߻�
1) icChecked�� ������ int�� ������ ����ؼ� �̳� ũ�� �����Ѵ�. [�޸� ����]
2) N-1�� ����� ��쿡�� ������� �ʵ��� �Ѵ�.

*/







