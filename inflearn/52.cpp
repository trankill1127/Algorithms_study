#include<iostream>
#include<vector>
using namespace std;

int main() {

	
	int N;
	cin >> N;

	vector<int> v(N, 0); //0 ������ -1�� �ڵ� �ʱ�ȭ
	
	v.push_back(1);
	int v_len = 1;
	int now;
	int mul = 2;

	for (int i = 0; i <= v_len; i++) {
		now = v[i] * mul;

		int j = 0;
		while (v[j] < now && j < v_len) j++;
		v.insert(v.begin() + j, now);
		v_len++;

		if (mul == 2) {
			mul = 3;
			i--;
		}
		else if (mul == 3) {
			mul = 5;
			i--;
		}
		else mul = 2;
	}

	cout << v[N];
	return 0;
}

/*
ugly numbers�� ���Ѵ�.
�迭�� �����Ѵ�.
�迭���� N��° UN�� ����


*/