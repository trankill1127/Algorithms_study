//30. 3의 개수는? (large)

#include<iostream>
#include<string>

using namespace std;

int main() {
	int N;
	cin >> N;

	string n_s = to_string(N);
	int left, right;

	int std = 1000000000;
	while (N < std) {
		std /= 10;
	}

	int cnt = 0;
	for (int i = 0; i < n_s.length(); i++) {
		
		if (i == 0) {
			left = 0;
			right = stoi(n_s.substr(i + 1));
		}
		else if (i == n_s.length() - 1) {
			left = stoi(n_s.substr(0, i));
			right = 0;
		}
		else {
			left = stoi(n_s.substr(0, i));
			right = stoi(n_s.substr(i + 1));
		}

		if (n_s[i] < '3') {
			cnt += left * std;
		}
		else if (n_s[i] == '3') {
			cnt += left * std + (right + 1);
		}
		else {
			cnt += (left + 1) * std;
		}

		std /= 10;

	}

	cout << cnt;
	return 0;
}


//문제1. 과거에 유사한 문제가 있는데 숫자를 구성하는 모든 수의 개수를
//세는 것이었다. 그와 달리 이 문제는 특정한 숫자의 개수를 구하는 
//것이고 그렇기 때문에 저번 문제와 같은 방식의 풀이는 먹히지 않음.
//
//!!강의 참고!!
//한 숫자에 여러개의 3이 있는 것을 고려하려 하면 너무나 복잡해진다.
//특정 자릿수에 3이 있는 것의 개수를 세는 방법으로 하면 단순해진다.


int main() {
	int N;
	cin >> N;



	return 0;
}

/*


1. 일일히 모든 수를 한자리씩 검사해서 3의 개수를 센다. [비효율적]
2. 법칙을 따져본다.


1 2 [3] 4 5 6 7 8 9
10 11 12 [13] 14 15 16 17 18 19
20 21 22 [23] 24 25 26 27 28 29
[30] [31] [32] [33] [34] [35] [36] [37] [38] [39]

N=4
1의 자리>=3
: 1[0]*1

N=33
10의 자리>=3
1의 자리>=3
: 4[0,1,2,3]*1 + 1[3]*4 = 8

N=25
10의 자리<3
1의 자리>=3
 : 3[0,1,2]*1 = 3

N=52
10의 자리>=3
1의 자리<3
 : 5[0,1,2,3,4]*1 + 1[3]*10 = 15

N= 241
백의자리 < 3
십의자리 > 3
일의자리 < 3

일단 백의 자리에서 3이 나올 가능성이 없음
:  
3 / 13 / 23 / 33 / 43 / 53 / 63 / 73 / 83 / 93 [40]
30~39 [10]
-> 0단위 [50] 100단위 [50]
200단위 [14]
=> [114]


// 
*/