//1. 1���� N���� M�� �����

#include <iostream>
using namespace std;

int main() {
	int n = 0, m = 0;

	scanf_s("%d %d", &n, &m);

	int sum = 0;
	for (int i = 1; i <= n; i++) { //O(n)
		if (i%m == 0) sum += i;
	}

	printf("%d", sum);
	return 0;
}

//C++ �⺻ ����� ���� ����صα�
/*
int main() {
	int n = 0, m = 0;

	cin>>n>>m;

	int sum = 0;
	for (int i = 1; i <= n; i++) { //O(n)
		if (i%m == 0) sum += i;
	}

	cout<<sum;
	return 0;
}
*/
