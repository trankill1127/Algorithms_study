//28. N!에서 0의 개수

#include<iostream>
#include<string>

using namespace std;

/*
int main() {
	int N;
	cin >> N;

	unsigned long long fact = 1;
	for (int i = 2; i < N + 1; i++) fact *= i;
	
	string fact_s = to_string(fact);
	int max_len = 1;
	int len = 1;
	for (int i = 1; i < fact_s.length(); i++) {
		if (fact_s[i - 1] == '0' && fact_s[i] == '0') len++;
		else {
			if (max_len < len) max_len = len;
			len = 1;
		}
	}

	cout << max_len;
	return 0;
}
*/

//문제1. to_string은 정수를 string으로 변환하는 함수로 string 헤더파일에 포함되어 있다.
//문제2. int로는 30이상의 수의 팩토리얼 값을 저장할 수 없다.
//int의 범위는 –2,147,483,648 ~ 2,147,483,647로 대략 10 자리수고
//long의 범위는 int와 동일하다.
//long long의 범위는 –9,223,372,036,854,775,808 ~ 9,223,372,036,854,775,807로 대략 19 자리수다.


int main() {
	int N;
	cin >> N;

	int cnt2=0, cnt5=0;
	for (int i = 2; i < N + 1; i++) {
		int target = i;
		
		while (target%5==0) {
			cnt5++;
			target /= 5;
		}
		while (target % 2 == 0) {
			cnt2++;
			target /= 2;
		}

	}

	if (cnt2 < cnt5) cout << cnt2;
	else cout << cnt5;

	return 0;
}


/*
1의 자리부터 연속적인 0의 개수를 세야함
N이 1000까지 가능한 판에 N!를 구한 뒤에에 0의 개수를 세는 건 비효율적

2!=2 
3!=6
4!=24
5!=120 *
6!=720
7!=5,040
8!=40,320
9!=362,880
10!=3,628,800 *
11!=39,916,800
12!=479,001,600
13!=6,227,020,800
14!=87,178,291,200
15!=1,307,674,368,000 *

곱하는 숫자들의 조합에서 2의 개수, 5의 개수를 센다.
그 중에서 더 적은 쪽이 우리가 원하는 답
*/


