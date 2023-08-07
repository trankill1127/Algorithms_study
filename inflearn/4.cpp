#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	vector<int> ages;
	
	int age;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>age;
		ages.push_back(age);
	}

	int min=ages[0], max=ages[0];
	for(int i=1; i<n; i++){
		if(min>ages[i]) min=ages[i];
		if(max<ages[i]) max=ages[i];
	}	
	
	cout<<max-min;
	
	return 0;
}

