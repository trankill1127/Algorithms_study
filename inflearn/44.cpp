//44. 마구간 정하기

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N, C;
	cin >> N >> C;

	int* stall = new int[N];
	for (int i = 0; i < N; i++) cin >> stall[i];

	//오름차순 정렬
	sort(stall, stall + N);

	int answer=0, mid, cnt;
	int left=stall[0], right=stall[N-1];
	while (left<=right) {
		mid = (left + right)/2;
		cnt = 0;

		for (int i = 0; i < N-1; i++) {
			
			for (int j = i+1; j < N; j++) {

				if (stall[j] - stall[i] >= mid) {
					cnt++;
					i = j-1;
					break;
				}

			}

			if (cnt == C-1) break;
			
		}

		if (cnt < C - 1) {
			right = mid - 1;
		}
		else {
			if (mid > answer) answer = mid;
			left = mid + 1;
		}

	}

	cout << answer;

	return 0;
}


/*
1.
이전 문제에서는 DVD에 녹화할 때에는 라이브에서의 순서가 그대로 유지되어야 한다
이번 문제에서는 N개의 마구간이 1차원 수직선상에 있습니다.
따라서 두 문제는 모두 입력값들의 순서가 정해져있음을 알 수 있다.

2.
sort 함수 
algorithm 헤더 소속
인자로 배열의 시작 주소, 마지막 주소

3.
https://data-make.tistory.com/310

4.
메모장 복붙 시 개행이 제대로 안되는 문제로 인해 예제 3~5는 검증 X
*/

