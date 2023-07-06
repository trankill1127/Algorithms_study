//14. 뒤집은 소수

#include<iostream>
using namespace std;

int reverse(int x);
bool isPrime(int x);

int main() {
	int N;
	cin >> N;

	int num;
	int rev_num;
	while (N > 0) {
		N--;
		cin >> num;
		rev_num = reverse(num);
		if (isPrime(rev_num)) cout<<rev_num<<" ";
	}

	return 0;
}

int reverse(int x) {
	int result = 0;
	while (x > 0) {
		result *= 10;
		result += x % 10;
		x /= 10;
	}
	return result;
}

bool isPrime(int x) {
	if (x == 1) return false;
	for (int i = 2; i < x; i++) {
		if (x%i == 0) return false;
	}
	return true;
}

//문제1. 1은 소수가 아니란 점을 놓침...