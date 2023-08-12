#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	int tmp;
	vector<int> A;
	vector<int> B;
	
	for (int i=0; i<10; i++){
		cin>>tmp;
		A.push_back(tmp);
	}
	for (int i=0; i<10; i++){
		cin>>tmp;
		B.push_back(tmp);
	}		
	
	vector<char> result;
	int a_score=0;
	int b_score=0;
	for (int i=0; i<10; i++){
				
		if (A[i]>B[i]) {
			a_score+=3;
			result.push_back('A');	
		}
		else if (A[i]==B[i]) {
			a_score+=1;
			b_score+=1;
			result.push_back('D');	
		}
		else {
			b_score+=3;	
			result.push_back('B');
		}
		
	}
	
	cout<<a_score<<" "<<b_score<<endl;
	
	if (a_score>b_score){
		cout<<'A';
	}
	else if (a_score<b_score){
		cout<<'B';
	}
	else {
		for (int i=9; i>=0; i--){
			if (result[i]=='A'){
				cout<<'A';
				break;
			}
			else if (result[i]=='B'){
				cout<<'B';
				break;
			}
			
			if (i==0){
				cout<<'D';
				break;
			}
		}
	}
	
	return 0;
}


