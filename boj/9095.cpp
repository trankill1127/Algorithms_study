#include<iostream>
using namespace std;

int main() {

	int t, n;
	int * memo = new int[11];

	cin >> t;

	memo[1] = 1;
	memo[2] = 2;
	memo[3] = 4;
	for (int i = 4; i < 11; i++) {
		memo[i] = memo[i - 1] + memo[i - 2] + memo[i - 3];
	}

	while (t > 0) {
		cin >> n;
		cout << memo[n] <<endl;
		t--;
	}

	delete memo;
	return 0;
}