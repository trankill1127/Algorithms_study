//17. ¼±»ı´Ô ÄûÁî

/*
#include<iostream>

using namespace std;

typedef struct student {
	int num;
	int answer;
};

int main() {
	int N;
	cin >> N;

	student* input = new student[N];
	for (int i = 0; i < N; i++) {
		cin >> input[i].num >> input[i].answer;
	}

	for (int i = 0; i < N; i++) {
		if (input[i].num*(input[i].num + 1) / 2 
			== input[i].answer) {
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
	}

	delete[] input;
	return 0;
}
*/

#include<iostream>
using namespace std;

typedef struct test {
	int Q;
	int A;
	bool isRight;
};

int main() {
	int N;
	cin >> N;

	test* Ts = new test[N + 1];
	for (int i = 1; i < N + 1; i++) {
		cin >> Ts[i].Q >> Ts[i].A;

		if (Ts[i].A == Ts[i].Q*(Ts[i].Q + 1) / 2) Ts[i].isRight = true;
		else Ts[i].isRight = false;
	}
	
	for (int i = 1; i < N + 1; i++) {
		if (Ts[i].isRight) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	delete[] Ts;
	return 0;
}