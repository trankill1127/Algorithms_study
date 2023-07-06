//12. 숫자의 총 개수(large : 제한시간 1초)

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N; //234

	int std = 10;
	int cnt = 0, digit=1;
	int cnted = 0;
	while (std<=N) {

		cnt += (std / 10 * 9) * digit; //9 189
		cnted += std / 10 * 9; //9 99
		std *= 10; //100 1000
		digit++; //2 3

	}
	cnt+=(N-cnted)*digit; //189+405

	cout << cnt;
	return 0;
}

/*
맨 앞자리 수가 1이 아닌 경우 오류 발생
cnted라고 이미 센 숫자의 개수를 저장하는 변수를 만들려다 말았더니...
결국 cnted 변수 추가해서 해결
*/

/*
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int cnted = 0, cnt = 1, digit = 9, answer = 0;

	//cnted 이미 센 숫자들의 개수
	//digit 앞으로 셀 숫자 단위
	//cnt 수를 이루는 숫자들의 개수
	//answer 1~n까지의 숫자를 이루는 숫자들의 개수

	while (cnted + digit < n) {
		cnted += digit;
		answer += (digit*cnt);
		cnt++;
		digit = digit * 10;
	}
	answer += ((n - cnted)*cnt);
	
	cout<<answer;
	return 0;
}
*/

//위아래 코드 모두 채점 프로그램에서 time_limit 넘김