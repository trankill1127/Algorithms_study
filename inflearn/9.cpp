#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	//소수 담기 
	vector<int> divisor;
	
	bool isDivisor = true;
	int cnt;
	for (int i=2; i<n+1; i++){
		cnt=0;
		
		for (int j=2; j<i; j++){
			if (i%j==0) {
				isDivisor=false;
				break;	
			}
		}
		
		if (isDivisor) divisor.push_back(i); 
		else isDivisor=true;
	}
	
	//약수 개수 계산
	int tmp;
	int j;
	int totalCnt; 
	 
	for (int i=1; i<n+1; i++){
		tmp=i;  
		j=0; // 소인수 idx 
		cnt=0; //tmp를 소인수로 나눌 수 있는 횟수 
		totalCnt=1; //tmp의 약수 개수 
		
		while (tmp!=1){
				
			if (tmp%divisor[j]>0){
				totalCnt*=(cnt+1);
				j++;
				cnt=0;
			}
				
			else {
				tmp/=divisor[j];
				cnt++;
			}
			
		}
		
		totalCnt *= (cnt+1);
		
		cout<<totalCnt<<" ";
	}
	
	return 0;
}

