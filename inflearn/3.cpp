//3. ������� ��
//�������? �ڱ��ڽ��� ������ ���

#include<iostream>
#include<string>

using namespace std;

int main() {
	int N;

	cin >> N;

	int sum = 0;
	string result;
	for (int i = 1; i < N; i++) {	//O(N-1)=O(N)
		if (N%i == 0) {
			result.append(to_string(i) + " + ");
			//string.append�� string�� ������ �߰��ϴ� �Լ�
			//to_stirng�� int�� string���� �ٲ��ִ� �Լ�
			sum += i;
		}
	}
	
	result.replace(result.length()-3,3," = "); //result�� �Ĺݺ� 3���� ���ڸ� " = "���� ��ü�ϰ� 
	result.append(to_string(sum)); //��������� ���� ���ڿ��� �߰�

	cout << result << endl;//��� ���
	return 0;
}

/*
���� 1. ���� ������ ����� ������ +�� ��µǴ� ���� ��� �ذ��ؾ� �ұ�?
string�� ���� ������� +�� �߰��ϴٰ� i�� N�� �Ǿ��� �� ������ +�� =���� ��ü�ϰ� ������� ���� �߰��Ѵ�.
*/