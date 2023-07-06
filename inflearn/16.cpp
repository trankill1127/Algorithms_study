//15. �Ҽ��� ����

/*
#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

typedef struct alp_cnt {
	char alp;
	int cnt;
};

int main() {
	string voc1, voc2;
	cin >> voc1;
	cin >> voc2;

	sort(voc1.begin(), voc1.end());//string ����
	sort(voc2.begin(), voc2.end());

	if (voc1.compare(voc2) == 0) {//string ��
		cout << "YES";
	}
	else cout << "NO";

	return 0;
}
*/

//����1. ����ü
//����2. string ����
//����3. string ��

#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string voc1, voc2;
	cin >> voc1;
	cin >> voc2;

	int len = voc1.length();

	int* a_c1 = new int[52];
	int* a_c2 = new int[52];
	for (int i = 0; i < 52; i++) {
		a_c1[i] = 0;
		a_c2[i] = 0;
	}
	for (int i = 0; i < len; i++) {
		if (voc1[i] >= 'a') a_c1[voc1[i] - 'a' + 26]++;
		else a_c1[voc1[i] - 'A']++;
		if (voc2[i] >= 'a') a_c2[voc2[i] - 'a' + 26]++;
		else a_c2[voc2[i] - 'A']++;
	}

	bool flag = true;
	for (int i = 0; i < 52; i++) {
		if (a_c1[i] != a_c2[i]) {
			flag=false;
			break;
		}
	}

	if (flag) cout << "YES";
	else cout << "NO";

	return 0;
}

//����1. ASCII �󿡼� A<a