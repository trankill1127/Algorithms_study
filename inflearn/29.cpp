//29. 3의 개수는? (small)

#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;

	string n_s;
	int cnt = 0;
	for (int i = 1; i < N + 1; i++) {
		n_s = to_string(i);
		for (int j = 0; j < n_s.length(); j++) {
			if (n_s[j] == '3') cnt++;
		}
	}
	
	cout << cnt;
	return 0;
} 