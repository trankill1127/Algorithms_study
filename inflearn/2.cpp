//2. �ڿ����� ��

#include <iostream>
using namespace std;

int main() {
	int A, B;

	cin>>A>>B;

	int sum = 0;
	for (int i = A; i <= B; i++) { //O(B-A+1)
		if (i!=B) cout << i << " +"; //�ڵ� ���� X
		else cout << i << " = ";
		sum += i;
	}

	cout<<sum;
	return 0;
}