//7. ���� �ܾ� ����

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

//����1. ������ ������ ���ڿ��� �Է¹ޱ� ���ؼ��� ��� �ؾ��ϴ°�?
//getline �Լ��� ����ϸ� �ȴ�. 2���� ���ڸ� �ʿ�� �ϴµ� cin, �Է¹��� ���ڿ��� �̸��̸� �ȴ�.