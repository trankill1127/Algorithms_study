//12. ������ �� ����(large : ���ѽð� 1��)

#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N; //234

	int std = 10;
	int cnt = 0, digit=1;
	int cnted = 0;
	while (std<=N) {

		cnt += (std / 10 * 9) * digit; //9 189
		cnted += std / 10 * 9; //9 99
		std *= 10; //100 1000
		digit++; //2 3

	}
	cnt+=(N-cnted)*digit; //189+405

	cout << cnt;
	return 0;
}

/*
�� ���ڸ� ���� 1�� �ƴ� ��� ���� �߻�
cnted��� �̹� �� ������ ������ �����ϴ� ������ ������� ���Ҵ���...
�ᱹ cnted ���� �߰��ؼ� �ذ�
*/

/*
#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int cnted = 0, cnt = 1, digit = 9, answer = 0;

	//cnted �̹� �� ���ڵ��� ����
	//digit ������ �� ���� ����
	//cnt ���� �̷�� ���ڵ��� ����
	//answer 1~n������ ���ڸ� �̷�� ���ڵ��� ����

	while (cnted + digit < n) {
		cnted += digit;
		answer += (digit*cnt);
		cnt++;
		digit = digit * 10;
	}
	answer += ((n - cnted)*cnt);
	
	cout<<answer;
	return 0;
}
*/

//���Ʒ� �ڵ� ��� ä�� ���α׷����� time_limit �ѱ�