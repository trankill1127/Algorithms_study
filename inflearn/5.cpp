//5. ���� ���

#include<iostream>
#include<string>
using namespace std;

int main() {
	string personal_id;
	char mark;
	string age_s;
	int age;
	char sex;

	cin >> personal_id;
	mark = personal_id.at(7);//index�� ��ġ�� ���� ��ȯ

	//O(1)
	if (mark == '1') { //1900���� ����
		sex = 'M';
		
		age_s = personal_id.substr(0, 2);//index�� 0�� �ڸ����� �����ؼ� 2���� ���ڸ� ���ڿ��� ��ȯ
		age = stoi(age_s);//���ڿ��� int�� ��ȯ
		age = 2019 - (1900 + age) + 1;
	}
	else if (mark == '2') { //1900���� ����
		sex = 'W';

		age_s = personal_id.substr(0, 2);
		age = stoi(age_s);
		age = 2019 - (1900 + age) + 1;
	}
	else if (mark == '3') { //2000���� ����
		sex = 'M';
		
		age_s = personal_id.substr(0, 2);
		age = stoi(age_s);
		age = 2019 - (2000 + age) + 1;
	}
	else if (mark == '4') { //2000���� ����
		sex = 'W';

		age_s = personal_id.substr(0, 2);
		age = stoi(age_s);
		age = 2019 - (2000 + age) + 1;
	}
	else;

	cout << age << " " << sex << endl;

	return 0;
}

//����1. �ڿ��� ù��° ���� �ƴ϶� ���ڸ��� ù��° ���ε�... ������ �߸� �о���.