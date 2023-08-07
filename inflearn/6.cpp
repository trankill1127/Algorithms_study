#include<iostream>
#include<string>

using namespace std;

int main() {

	string input;
	cin>>input;
	
	string num_s = ""; 
	
	for (int i=0; i<input.length(); i++){
		if ('0'<=input[i]&&input[i]<='9'){
			num_s+=input[i];
		}
	}
	
	int num = stoi(num_s);
	int cnt=0;
	for(int i=1; i<num+1; i++){
		if (num%i==0){
			cnt++;
		}
	} 
	
	cout<<num<<endl;
	cout<<cnt;
	
	return 0;
}
