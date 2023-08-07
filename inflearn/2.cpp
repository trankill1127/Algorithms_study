#include<iostream>
using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int total = 0;
	for (int i = a; i < b + 1; i++) {
		cout << i;
		total += i;
		if (i < b) {
			cout << " +";
		}
		else {
			cout << " = ";
		}
	}

	cout << total;

	return 0;
}
