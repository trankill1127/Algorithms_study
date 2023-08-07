#include<iostream>
#include<stack>

using namespace std;

int main() {
	string input;
	cin>>input;
	
	stack<int> stack;
	for (int i=0; i<input.length(); i++){
		if (input[i]=='('){
			stack.push(input[i]);
		}
		else {
			if (stack.empty()) {
				cout<<"NO";
				return 0;
			}
			
			stack.pop();
			
		}
	}
	
	if(stack.empty()) cout<<"YES";
	else cout<<"NO";

	return 0;
}
