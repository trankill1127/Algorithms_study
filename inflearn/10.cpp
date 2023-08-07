#include<iostream>
#include<vector>

using namespace std;

int digit_sum(int x){
	int sum=0;
	
	while (x>0){
		sum += (x%10);
		x/=10;	
	}
	
	return sum;
}


int main() {
	
	int n;
	cin>>n;
	
	vector<int> number;
	int tmp;
	for (int i=0; i<n; i++){
		cin>>tmp;
		number.push_back(tmp);
	}
	
	int max=0;
	int maxSum=0;
	for (int i=0; i<n; i++){
		tmp=digit_sum(number[i]);
		
		if (maxSum<tmp){
			maxSum=tmp;
			max=i;
		}
		else if (maxSum==tmp){
			if (number[max]<number[i]){
				max=i;
			}
		}
	}
	
	cout<<number[max];
	
	return 0;
}
