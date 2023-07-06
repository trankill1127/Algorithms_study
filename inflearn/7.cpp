//7. 영어 단어 복구

#include<iostream>
#include<string>

using namespace std;

int main() {
	string voca_original;
	string voca_modified;

	getline(cin, voca_original);
	
	for (int i = 0; i < voca_original.length(); i++) { //O(len)
		if ('A' <= voca_original.at(i) && voca_original.at(i) <= 'Z') {
			voca_modified += 'a'+voca_original.at(i)-'A';
		}
		else if (voca_original.at(i)==' ') {

		}
		else {
			voca_modified+=voca_original.at(i);
		}
	}

	cout << voca_modified;

	return 0;
}

//문제1. 공백을 포함한 문자열을 입력받기 위해서는 어떻게 해야하는가?
//getline 함수를 사용하면 된다. 2개의 인자를 필요로 하는데 cin, 입력받을 문자열의 이름이면 된다.