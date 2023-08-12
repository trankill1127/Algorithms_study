#include<iostream>
#include<vector>

using namespace std;

char match(int a, int b){
	if (a==1 && b==3 || a==2 && b==1 || a==3 && b==2){
		return 'A';
	}
	else if (a==b){
		return 'D';
	}
	else return 'B';
}

int main() {
	
	int n;
	cin>>n;
	
	int tmp;
	vector<int> A;
	vector<int> B;
	
	for (int i=0; i<n; i++){
		cin>>tmp;
		A.push_back(tmp);
	} 
	for (int i=0; i<n; i++){
		cin>>tmp;
		B.push_back(tmp);
	} 
	
	for (int i=0; i<n; i++){
		cout<<match(A[i], B[i])<<endl; 
	}
	
	return 0;
}
