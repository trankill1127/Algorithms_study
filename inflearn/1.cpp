#include<iostream>

using namespace std;


int main() {

	int n, m;
	cin >> n >> m;

	int total = 0;
	for (int i = 1; i < n + 1; i++) {
		if (i%m == 0) {
			total += i;
		}
	}

	cout << total;

	return 0;
}
