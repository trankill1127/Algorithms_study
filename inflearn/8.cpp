//8. 올바른 괄호

#include<iostream>
#include<string>
#include<stack>//stack을 사용하기 위해 필요한 헤더파일

using namespace std;

int main() {
	string str;

	cin >> str;

	int i;
	stack<char> brackets;//stack 선언
	for (i = 0; i < str.length(); i++) {
		if (str.at(i) == '(') brackets.push('(');
		else {
			if (brackets.empty()) break;
			else brackets.pop();
		}
	}

	if (i == str.length() && brackets.empty()) cout << "YES";
	else cout << "NO";

	return 0;
}

/*
문제1. 올바른 괄호와 올바르지 않은 괄호를 구별하는 방법은 무엇일까?
stack
(를 찾으면 push, )를 찾으면 (를 pop
stack에 남은 것이 없으면서, 문자열을 모두 검사했다면 올바른 괄호
그 외의 경우에는 올바르지 않은 괄호
*/