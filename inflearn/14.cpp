#include<iostream>
#include<string> 

using namespace std;

int reverse(int x){
	
	int result = 0;
	
	while (x){
		result*=10;
		result+=(x%10);
		x/=10;
	}
	
	return result;
}

bool isPrime(int x){
	
	if (x==1) return false;
	
	for (int i=2; i<x; i++){
		if (x%i==0) {
			return false;
		}
	}
	
	return true;
	
}

int main() {
	
	int n;
	cin>>n;
	
	int num;
	for (int i=0; i<n; i++){
		cin>>num;
		num=reverse(num);
		if (isPrime(num)) cout<<num<<" ";
	}
	
	return 0;
}
