#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool answerCheck(int q, int a){
	int answer = q*(q+1)/2;
	
	if (a==answer) return true;
	else return false;
}

int main() {
	
	int n;
	cin>>n;
	
	int q, a;
	for (int i=0; i<n; i++){
		cin>>q>>a;
		if (answerCheck(q,a)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
