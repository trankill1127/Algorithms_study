#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int getGroupAnagrams(vector<string> words) {

	for (int i = 0; i < words.size(); i++) {
		sort(words[i].begin(), words[i].end());
	}
	sort(words.begin(), words.end());
	int result = unique(words.begin(), words.end())-words.begin();

	return result;
}

int main() {

	vector<string> words = { "cat", "listen" , "silent" , "kitten", "salient" };

	cout << getGroupAnagrams(words);

}

/*
case 1
{ "cat", "listen" , "silent" , "kitten", "salient" }
4

case 2
{ "inch", "cat" , "chin" , "kit", "act" }
3
*/