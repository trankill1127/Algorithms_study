#include<iostream>
#include<vector>
using namespace std;

int main() {

	int n;
	cin>>n;
	
	vector<int> arr;
	
	for (int i=1; i<n; i++){
		if (n%i==0) {
			arr.push_back(i);
		}
	}

	int total=0;
	int arrLen = arr.size();
	for (int i=0; i<arrLen; i++){
		cout<<arr[i];
		total+=arr[i];
		if (i<arrLen-1){
			cout<<" + ";
		}
		else {
			cout<<" = "<<total;
		}
	}
	
	return 0;
}
