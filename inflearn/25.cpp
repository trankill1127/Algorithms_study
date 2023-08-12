#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	
	int tmp;
	vector<int> student;
	for (int i=0; i<n; i++){
		cin>>tmp;
		student.push_back(tmp);
	}
	
	vector<int> sortedStudent;
	sortedStudent=student;
	sort(sortedStudent.begin(), sortedStudent.end(), greater<int>());
	
	int rank = 0;
	for (int i=0; i<n; i++){
		rank=find(sortedStudent.begin(), sortedStudent.end(), student[i])-sortedStudent.begin();
		rank+=1;
		
		cout<<rank<<" ";
	}

	return 0;
}


