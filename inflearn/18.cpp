#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	int n, m;
	cin>>n>>m;
	
	int input;
	vector<int> sound;
	for (int i=0; i<n; i++){
		cin>>input;
		sound.push_back(input);
	}
	
	int timeLen=0;
	int maxTimeLen=0;
	for (int i=0; i<n; i++){

		if (sound[i]>m) {
			timeLen++;
			
			if (i==n-1 && maxTimeLen<timeLen){
				maxTimeLen = timeLen;	
			}	
		}

		else {
			if (sound[i-1]>m && maxTimeLen<timeLen){
				maxTimeLen = timeLen;				
			}
			
			timeLen = 0;
		}
	}
	
	if (maxTimeLen) cout<<maxTimeLen;
	else cout<<-1;
	
	return 0;
}

