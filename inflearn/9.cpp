#include<iostream>
#include<vector>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	//�Ҽ� ��� 
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
	
	//��� ���� ���
	int tmp;
	int j;
	int totalCnt; 
	 
	for (int i=1; i<n+1; i++){
		tmp=i;  
		j=0; // ���μ� idx 
		cnt=0; //tmp�� ���μ��� ���� �� �ִ� Ƚ�� 
		totalCnt=1; //tmp�� ��� ���� 
		
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

