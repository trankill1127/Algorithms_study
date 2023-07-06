//3. 진약수의 합
//진약수란? 자기자신을 제외한 약수

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
			//string.append는 string에 내용을 추가하는 함수
			//to_stirng은 int를 string으로 바꿔주는 함수
			sum += i;
		}
	}
	
	result.replace(result.length()-3,3," = "); //result의 후반부 3개의 문자를 " = "으로 대체하고 
	result.append(to_string(sum)); //진약수들의 합을 문자열에 추가

	cout << result << endl;//결과 출력
	return 0;
}

/*
문제 1. 가장 마지막 진약수 다음에 +가 출력되는 점을 어떻게 해결해야 할까?
string을 만들어서 진약수와 +를 추가하다가 i가 N이 되었을 때 마지막 +를 =으로 교체하고 진약수의 합을 추가한다.
*/