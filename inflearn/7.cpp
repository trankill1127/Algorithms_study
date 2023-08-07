#include<iostream>
#include<string>

using namespace std;

int main() {

	string input;
	getline(cin, input);
	
	string output = "";
	for (int i=0; i<input.length(); i++){
		if ('A'<=input[i]&&input[i]<='Z'){
			output+=('a'+(input[i]-'A'));
		}
		else if ('a'<=input[i]&&input[i]<='z'){
			output+=input[i];
		}
	}

	cout<<output;

	return 0;
}

