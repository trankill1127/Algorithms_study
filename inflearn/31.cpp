//31. źȭ���� ����

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

//����1. cin���� string�� �Է¹������� <string> ��� ������ �߰��ؾ� ��.
//����2. a,b�� 1�� ��츦 ��� X