//20. 가위 바위 보

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* As = new int[N];
	int* Bs = new int[N];
	for (int i = 0; i < N; i++) cin >> As[i];
	for (int i = 0; i < N; i++) cin >> Bs[i];

	for (int i = 0; i < N; i++) {
		if (As[i] == 1 && Bs[i] == 3
			|| As[i] == 2 && Bs[i] == 1
			|| As[i] == 3 && Bs[i] == 2) cout << "A" << endl;
		else if (As[i] == 3 && Bs[i] == 1
			|| As[i] == 1 && Bs[i] == 2
			|| As[i] == 2 && Bs[i] == 3) cout << "B" << endl;
		else cout << "D" << endl;
	}

	delete[] As;
	delete[] Bs;
	return 0;
}