//6. 숫자만 추출

#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;

	cin >> str;

	string num_s="";
	int num = 0;
	for (int i = 0; i < str.length(); i++) {//O(len)
		if ('0' <= str.at(i) && str.at(i) <= '9') {
			num_s+=str.at(i);
		}
	}
	num = stoi(num_s);
	
	int cnt=0;
	for (int i = 1; i < num + 1; i++) {//O(n)
		if (num%i == 0) cnt++;
	}

	cout << num << endl;
	cout << cnt << endl;

	return 0;
}