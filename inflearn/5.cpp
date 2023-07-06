//5. 나이 계산

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
	mark = personal_id.at(7);//index에 위치한 문자 반환

	//O(1)
	if (mark == '1') { //1900년대생 남자
		sex = 'M';
		
		age_s = personal_id.substr(0, 2);//index가 0인 자리부터 시작해서 2개의 문자를 문자열로 반환
		age = stoi(age_s);//문자열을 int로 반환
		age = 2019 - (1900 + age) + 1;
	}
	else if (mark == '2') { //1900년대생 여자
		sex = 'W';

		age_s = personal_id.substr(0, 2);
		age = stoi(age_s);
		age = 2019 - (1900 + age) + 1;
	}
	else if (mark == '3') { //2000년대생 남자
		sex = 'M';
		
		age_s = personal_id.substr(0, 2);
		age = stoi(age_s);
		age = 2019 - (2000 + age) + 1;
	}
	else if (mark == '4') { //2000년대생 여자
		sex = 'W';

		age_s = personal_id.substr(0, 2);
		age = stoi(age_s);
		age = 2019 - (2000 + age) + 1;
	}
	else;

	cout << age << " " << sex << endl;

	return 0;
}

//문제1. 뒤에서 첫번째 수가 아니라 뒷자리의 첫번째 수인데... 문제를 잘못 읽었다.