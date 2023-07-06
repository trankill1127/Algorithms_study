//27. N!의 표현법

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int cnts[1000] = { 0 };

	for (int i = 2; i < N + 1; i++) {
		int std = i;
		int div = 2;
		while (std != 1) {
			if (std%div == 0) {
				cnts[div]++;
				std /= div;
			}
			else {
				div++;
			}
		}
	}

	cout << N << "! = ";
	for (int i = 2; i < 1000; i++) {
		if (cnts[i]) cout << cnts[i] << " ";
	}

	return 0;
}