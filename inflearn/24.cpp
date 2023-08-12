#include<iostream>
#include<vector>
#include<algorithm>

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
	
	vector<int> jjCheck;
	for (int i=1; i<n; i++){
		jjCheck.push_back(i);
	}
	
	vector<int>::iterator iter;
	for (int i=0; i<n-1; i++){
		if (num[i]>num[i+1]) tmp=num[i]-num[i+1];		
		else tmp=num[i+1]-num[i];		
		
		iter=find(jjCheck.begin(), jjCheck.end(), tmp);
		
		if (iter!=jjCheck.end()) jjCheck.erase(iter);
	}

	if (jjCheck.empty()){
		cout<<"YES";
	} 
	else {
		cout<<"NO";
	}

	return 0;
}
