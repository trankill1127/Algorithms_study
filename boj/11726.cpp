#include<iostream>
#include<vector>
using namespace std;

int main() {

	int h;
	vector<int> cnt;

	cin >> h;

	cnt.push_back(0);
	cnt.push_back(1);
	cnt.push_back(2);

	for (int i = 3; i < h + 1; i++) {
		cnt.push_back((cnt[i - 2] + cnt[i - 1]) % 10007);
	}

	cout << cnt.at(h);

	return 0;
}