#include<iostream>
#include<string> 
#include<cmath>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int cnt=0;
	bool isPrime;
	for (int i=2; i<n+1; i++){
		
		isPrime=true;
		
		for (int j=2; j<=sqrt(i); j++){
			if (i%j==0) {
				isPrime=false;
				break;	
			}
		}
		
		if (isPrime) {
			cnt++;
		}
		
	}
	
	cout<<cnt;
	
	return 0;
}

