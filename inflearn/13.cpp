//13. 가장 많이 사용된 자릿수

#include<iostream>
#include<string>

using namespace std;

int main() {
	string N;
	cin >> N;

	int cnt[10] = { 0 };
	for (int i = 0; i < N.length(); i++) { //O(len)
		cnt[atoi(N[i])]++;
	}

	int max = 0;
	for (int i = 1; i < 10; i++) { //O(10)
		if (cnt[max] <= cnt[i]) max = i;
	}

	cout << max;
	return 0;
}