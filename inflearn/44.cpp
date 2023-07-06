//44. ������ ���ϱ�

#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N, C;
	cin >> N >> C;

	int* stall = new int[N];
	for (int i = 0; i < N; i++) cin >> stall[i];

	//�������� ����
	sort(stall, stall + N);

	int answer=0, mid, cnt;
	int left=stall[0], right=stall[N-1];
	while (left<=right) {
		mid = (left + right)/2;
		cnt = 0;

		for (int i = 0; i < N-1; i++) {
			
			for (int j = i+1; j < N; j++) {

				if (stall[j] - stall[i] >= mid) {
					cnt++;
					i = j-1;
					break;
				}

			}

			if (cnt == C-1) break;
			
		}

		if (cnt < C - 1) {
			right = mid - 1;
		}
		else {
			if (mid > answer) answer = mid;
			left = mid + 1;
		}

	}

	cout << answer;

	return 0;
}


/*
1.
���� ���������� DVD�� ��ȭ�� ������ ���̺꿡���� ������ �״�� �����Ǿ�� �Ѵ�
�̹� ���������� N���� �������� 1���� �������� �ֽ��ϴ�.
���� �� ������ ��� �Է°����� ������ ������������ �� �� �ִ�.

2.
sort �Լ� 
algorithm ��� �Ҽ�
���ڷ� �迭�� ���� �ּ�, ������ �ּ�

3.
https://data-make.tistory.com/310

4.
�޸��� ���� �� ������ ����� �ȵǴ� ������ ���� ���� 3~5�� ���� X
*/

