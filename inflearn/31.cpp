//31. 탄화수소 질량

#include<iostream>
#include<string>

using namespace std;

int main() {
	string type;
	cin >> type;

	int cnt_c=0;
	int cnt_h=0;

	int i = 0;
	if (type[i + 1] == 'H') {
		cnt_c = 1;
	}
	else {
		while (type[i + 1] != 'H') {
			i++;
			cnt_c += (type[i] - '0');
			cnt_c *= 10;
		}
		cnt_c /= 10;
	}
	i++;
	if (i + 1 == type.length()) {
		cnt_h = 1;
	}
	else {
		while (i + 1 < type.length()) {
			i++;
			cnt_h += (type[i] - '0');
			cnt_h *= 10;
		}
		cnt_h /= 10;
	}

	cout << cnt_c * 12 + cnt_h * 1;

	return 0;
}

//문제1. cin으로 string을 입력받으려면 <string> 헤더 파일을 추가해야 함.
//문제2. a,b가 1인 경우를 고려 X