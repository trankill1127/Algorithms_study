//4. ���� ����

#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	//�������� �迭 �Ҵ�
	int * ages = new int[N];
	for (int i = 0; i < N; i++) { //O(N)
		cin >> ages[i];
	}

	int min=ages[0], max=ages[0];
	for (int i = 1; i < N; i++) { //O(N-1)=O(N)
		if (ages[i] < min) min = ages[i];
		else if (ages[i] > max) max = ages[i];
	}

	cout << max - min << endl;

	//�޸� ����
	delete[] ages;
	return 0;
}