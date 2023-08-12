#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int tmp;
	vector<int> num;
	for (int i=0; i<n; i++){
		cin>>tmp;
		num.push_back(tmp);
	}
	
	int len=1;
	int maxLen = 0;
	for (int i=1; i<n; i++){
		
		if (num[i-1]<=num[i]){
				len++;
				
				if (i==n-1){
					if (maxLen<len) maxLen=len;
				}
		}
		else {
			if (maxLen<len) {
				maxLen=len;	
			}	
			
			len=1;		
		}
		
	}
	
	cout<<maxLen;

	return 0;
}
