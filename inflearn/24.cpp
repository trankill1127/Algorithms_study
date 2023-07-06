//24. jolly jumpers

/*
#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* nums = new int[N];
	int* diffs = new int[N];
	for (int i = 0; i < N; i++) diffs[i] = 0;

	for (int i = 0; i < N; i++) {
		cin >> nums[i];

		if (i > 0) {
			if (abs(nums[i] - nums[i - 1]) < N)
				diffs[abs(nums[i] - nums[i - 1])] = 1;
		}
	}

	bool flag = true;
	for (int i = 1; i < N; i++) {
		if (diffs[i] == 0) {
			flag = false;
			break;
		}
	}
	if (flag) cout << "YES";
	else cout << "NO";
	
	delete[] nums;
	delete[] diffs;
	return 0;
}
*/

//문제1. 인자로 전달한 int의 절대값을 반환해주는 함수 abs

//문제2. 예제5 입력 시 결과값이 나오지 않음.
//diffs를 N-1의 크기로 설정했는데 두 수의 차가 이 범위를 넘어가는 경우에 오류가 발생



#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	int N;
	cin >> N;

	int* num = new int[N + 1];
	for (int i = 1; i < N + 1; i++) cin >> num[i];
	
	int* isChecked = new int[N];
	for (int i = 1; i < N; i++) {
		int idx = abs(num[i + 1]-num[i]);
		if (idx<N) isChecked[idx] = 1;
	}

	int cnt = 0;
	for (int i = 1; i < N; i++) {
		if (isChecked[i] == 1) cnt++;
	}

	if (cnt == N - 1) cout << "YES";
	else cout << "NO";

	delete[] num;
	delete[] isChecked;
	return 0;
}

/*

모든 차를 구하는 건 무조건 해야 함
차를 저장하는 방식을 어떻게 할까가 문제
1~N-1까지를 인덱스로 하는 배열을 만들고
차를 발견할 때마다 1로 변환
나중에 전체적으로 검사해서 0인 애들이 있으면 NO

# 기억할 점.
절대값을 구하는 함수 abs는 cmath 헤더파일에 포함되어 있다.

# 문제1.
두개의 차가 1~N-1의 범위를 벗어나는 경우 오류 발생
1) icChecked의 범위를 int의 범위를 고려해서 겁나 크게 설정한다. [메모리 낭비]
2) N-1을 벗어나는 경우에는 저장되지 않도록 한다.

*/







