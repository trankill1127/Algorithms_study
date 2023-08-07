#include<iostream>
#include<string> 
#include<map>

using namespace std;

int main() {
	
	string n;
	cin>>n;
	
	map<int, int> cnt;
	
	for (int i=0; i<n.length(); i++){
		cnt[n[i]-'0']++;
	}
	
	auto maxIter=cnt.begin();
	for (auto i=cnt.begin(); i!=cnt.end(); i++){
		
		if (i->second > maxIter->second) maxIter=i;
		
		else if (i->second == maxIter->second) {
			if  ( i->first > maxIter->first ) maxIter=i; 
		} 
		
	}
	
	cout<<maxIter->first;
	
	return 0;
}

