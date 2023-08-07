#include<iostream>
#include<string>

using namespace std;

int main() {
	
	string id;
	cin>>id;
	
	int age=0;
	char sex;
	
	if (id[7]=='1'){
		age = 2019-stoi("19"+id.substr(0,2))+1;
		sex='M';
	}
	else if (id[7]=='2'){
		age = 2019-stoi("19"+id.substr(0,2))+1;
		sex='W';
	}
	else if (id[7]=='3'){
		age = 2019-stoi("20"+id.substr(0,2))+1;
		sex='M';
	}
	else{
		age = 2019-stoi("20"+id.substr(0,2))+1;
		sex='W';
	}
			
	cout<<age<<" "<<sex;
	
	return 0;
}
