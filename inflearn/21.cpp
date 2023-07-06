//21. 카드게임

#include<iostream>
using namespace std;

int main() {
	int A[10], B[10];

	for (int i = 0; i < 10; i++) cin >> A[i];
	for (int i = 0; i < 10; i++) cin >> B[i];

	int scoreA = 0, scoreB = 0;

	for (int i = 0; i < 10; i++) {
		if (A[i] < B[i]) scoreB += 3;
		else if (A[i] == B[i]) {
			scoreA++;
			scoreB++;
		}
		else scoreA += 3;
	}

	cout << scoreA << " " << scoreB << endl;
	
	char winner='D';
	if (scoreA < scoreB) winner = 'B';
	else if (scoreA == scoreB) {
		for (int i = 9; i >= 0; i--) {
			if (A[i] < B[i]) {
				winner = 'B';
				break;
			}
			else if (A[i] > B[i]) {
				winner = 'A';
				break;
			}
		}
	}
	else winner = 'A';
	cout << winner;

	return 0;
}