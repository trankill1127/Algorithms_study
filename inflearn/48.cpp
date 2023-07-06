//48. �� ���� ��հ� ���� ����� ��

#include<iostream>
#include <cmath>
using namespace std;

int main() {

	//���� �Ҵ�
	int** nums = new int*[9];
	for (int i = 0; i < 9; i++) {
		nums[i] = new int[9];
	}

	//�Է�
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> nums[i][j];
		}
	}

	int sum, avg, nearest;
	for (int i = 0; i < 9; i++) {
		sum = 0;

		for (int j = 0; j < 9; j++) {
			sum += nums[i][j];
		}
		avg = round(float(sum) / 9);

		nearest = nums[i][0];
		for (int j = 1; j < 9; j++) {
			if (abs(nums[i][j] - avg) < abs(nearest - avg)) {
				nearest = nums[i][j];
			}
			else if (abs(nums[i][j] - avg) == abs(nearest - avg)) {
				if (nums[i][j] > nearest) nearest = nums[i][j];
			}
		}

		cout << avg << " " << nearest << endl;
	}

	//���� �Ҵ� ����
	for (int i = 0; i < 9; i++) {
		delete[] nums[i];
	}
	delete[] nums;

	return 0;
}

/*
1.
���밪 ���ϱ�

2.
�Ҽ����� ������ ������

3.
ù°�ڸ����� �ݿø��ϱ�

4.
���� ���� ������ �͵��� �� �� ū ���� ����
*/