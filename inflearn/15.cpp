//15. �Ҽ��� ����

/*
#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int prime_cnt = 0;
	for (int i = 2; i < N + 1; i++) {
		bool flag = true;

		int cnt = 0;
		for (int j = 2; j*j<=i; j++) {
			if (i%j == 0) {
				flag = false;
				break;
			}
		}
		if (flag) prime_cnt++;

	}

	cout << prime_cnt;
	return 0;
}
*/



#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N;
	cin >> N;

	vector<int> primes;
	int cnt = 0;

	for (int i = 2; i < N + 1; i++) {

		bool isPrime = true;
		for (int j = 0; j < primes.size(); j++) {
			if (i%primes[j] == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) {
			primes.push_back(i);
		}

	}

	cout << primes.size();
	return 0;
}


/*
i�� �Ҽ����� ���ϴ� ���
1. 1 ~ j==i�� j
2. �������� ���� �Ҽ���
3. 1 ~ j*j<=i�� j

N=150000
2�� ��� 19.31 sec
3�� ��� 4.478 sec
2�� 3 �߿��� 3�� �� ������.

144�� ���� ����� ��
2�� ��� (34) 
2,3,5,7,
11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,
101,103,107,109,113,127,131,137,139 
3�� ��� (12)
1~12
*/