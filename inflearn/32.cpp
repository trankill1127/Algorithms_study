//32. ��������

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* num = new int[N];
	for (int i = 0; i < N; i++) cin >> num[i];

	int tmp, min_idx;
	for (int i = 0; i < N-1; i++) {
		min_idx = i;
		for (int j = i + 1; j < N; j++) {
			if (num[min_idx] > num[j]) min_idx = j;
		}
		tmp = num[i];
		num[i] = num[min_idx];
		num[min_idx] = tmp;
	}

	for (int i = 0; i < N; i++) cout << num[i] << " ";

	delete[] num;
	return 0;
}

/*
���� ������ ù ��° �ڷḦ �� ��° �ڷ���� ������ �ڷ���� ���ʴ�� ���Ͽ� 
���� ���� ���� ã�� ù ��°�� ����, �� ��° �ڷḦ �� ��° �ڷ���� ������ �ڷ������ 
���ʴ�� ���Ͽ� �� �� ���� ���� ���� ã�� �� ��° ��ġ�� ���� ������ �ݺ��ϸ� 
������ �����Ѵ�
*/