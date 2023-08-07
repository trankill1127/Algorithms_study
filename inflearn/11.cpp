#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int totalCnt=0;
	int tmp;
	for (int i=1; i<n+1; i++){
		tmp=i;
		
		while (tmp>0){
			tmp/=10;
			totalCnt++;
		}
		
	}
	
	cout<<totalCnt;
	
	return 0;
}
