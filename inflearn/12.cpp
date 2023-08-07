#include<iostream>
#include<string> 

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int digit = to_string(n).length();
	
	int std=1;
	for (int i=1; i<digit; i++){
		std*=10;
	} 
	
	int tmp;
	long long totalCnt = (n-std+1)*digit;
	
	while (std>0){
		tmp=std-1;
		std/=10;
		digit--;
		totalCnt+=(tmp-std+1)*digit;
	}
	
	cout<<totalCnt;
	
	return 0;
}
