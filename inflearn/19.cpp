#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int tmp;
	vector<int> seat;
	
	for (int i=0; i<n; i++){
		cin>>tmp;
		seat.push_back(tmp);
	} 
	
	bool isTall;
	int cnt=0;
	for (int i=0; i<n-1; i++){
		isTall=false;
		
		for (int j=i+1; j<n; j++){
			
			if (seat[i]<seat[j]){
				isTall=true;
				i=j-1;
				break;
			}
			else if (seat[i]==seat[j]){
				isTall=true;
				break;
			}
			
		}
		
		if (!isTall) cnt++;
		
	}
	
	cout<<cnt;
	
	return 0;
}
