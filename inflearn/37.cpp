//37. Least recently used

#include<iostream>
using namespace std;

int main() {
	int S, N;
	cin >> S >> N;

	int* cache = new int[S];
	for (int i = 0; i < S; i++) cache[i] = 0;

	int job;
	bool isExist;
	int e_idx;
	for (int i = 0; i < N; i++) { //작업 처리
		cin >> job;

		//작업이 캐시에 존재하는지 확인
		isExist = false;
		for (int j = 0; j < S; j++) {
			if (cache[j] == job) {
				isExist = true;
				e_idx = j;
				break;
			}
		}
		
		if (isExist) { //존재O
			for (int j = e_idx; j > 0; j--) { //뒤로 밀고
				cache[j] = cache[j - 1];
			}
			cache[0] = job; //추가
		}
		else { //존재X
			for (int j = S - 1; j > 0; j--) { //뒤로 밀고
				cache[j] = cache[j - 1];
			}
			cache[0] = job; //추가
		}

	}

	for (int i = 0; i < S; i++) cout << cache[i] << " ";

	delete[] cache;
	return 0;
}