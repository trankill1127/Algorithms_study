//8. �ùٸ� ��ȣ

#include<iostream>
#include<string>
#include<stack>//stack�� ����ϱ� ���� �ʿ��� �������

using namespace std;

int main() {
	string str;

	cin >> str;

	int i;
	stack<char> brackets;//stack ����
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
����1. �ùٸ� ��ȣ�� �ùٸ��� ���� ��ȣ�� �����ϴ� ����� �����ϱ�?
stack
(�� ã���� push, )�� ã���� (�� pop
stack�� ���� ���� �����鼭, ���ڿ��� ��� �˻��ߴٸ� �ùٸ� ��ȣ
�� ���� ��쿡�� �ùٸ��� ���� ��ȣ
*/