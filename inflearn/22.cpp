#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	int n, k;
	cin>>n>>k;
	
	int tmp;
	vector<int> temperature;
	for (int i=0; i<n; i++){
		cin>>tmp;
		temperature.push_back(tmp);
	}
	
	int max = 0;
	for (int j=0; j<k; j++){
		max+=temperature[j];
	}
	
	int now=max;
	for (int i=1; i<n-k+1; i++){
		now-=temperature[i-1];
		now+=temperature[i-1+k];
		
		if (now>max) max=now;
	}
	
	cout<<max;
	return 0;
}

