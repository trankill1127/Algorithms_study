#include<iostream>
#include<algorithm>
using namespace std;

int main() {

	int n;
	int * cnt = NULL;
	int i, j;

	int tmp;

	cin >> n;

	cnt = new int[n + 1];

	cnt[1] = 0;
	i = 2;
	while (i < n + 1) {

		cnt[i] = i;

		if (i % 3 == 0) {
			tmp = cnt[i / 3] + 1;
			cnt[i] = min(cnt[i], tmp);
		}
		if (i % 2 == 0) {
			tmp = cnt[i / 2] + 1;
			cnt[i] = min(cnt[i], tmp);
		}
		if (i - 1 >= 1) {
			tmp = cnt[i - 1] + 1;
			cnt[i] = min(cnt[i], tmp);
		}

		i++;
	}

	cout << cnt[n];

	delete cnt;
	return 0;
}