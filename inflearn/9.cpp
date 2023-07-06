//9. 모두의 약수

#include<iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	int * div_cnt = new int[N+1];
	
	for (int i = 1; i <= N; i++) {
		div_cnt[i] = 0;
		for (int j = 1; j <= i; j++) {
			if (i%j == 0) {
				div_cnt[i]++;
			}
		}
		cout << div_cnt[i] << " ";
	}

	delete[] div_cnt;
	return 0;
}

/*
문제1. 메모이제이션 기법 등을 통해 효율을 높일 수는 없을까?
N이라면 N-1부터 역으로 약수들의 개수를 저장한 배열을 검사한다.
N이 9라면 8부터 1까지 검사를 하는거지
8,7,6,5,4는 넘어가고 3으로 9가 나눠진다.
그러면 arr[3]+1의 값이 arr[9]의 값이 되는거지...
라고 생각했는데 N=6일 때 법칙이 무너져서 그냥 가장 단순한 방법으로 풀었다.
나중에 개선할 수 있으면 개선하기
*/