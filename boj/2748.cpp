#include <iostream>
using namespace std;

int main() {

	int n;
	long long * memo;
	int i;

	cin >> n;

	memo = new long long[n + 1];

	memo[0] = 0;

	if (n > 0) memo[1] = 1;

	if (n > 1) {
		i = 2;

		while (i < n + 1) {
			memo[i] = memo[i - 2] + memo[i - 1];
			i++;
		}
	}

	cout << memo[n];

	delete memo;

	return 0;
}
