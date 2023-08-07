//1
/*
int getMinRooms(vector<vector<int>> meetingTimings) {

	vector<pair<int, int>> timeline;

	for (int i=0; i<meetingTimings.size(); i++){
		timeline.push_back({meetingTimings[i][0],1});
		timeline.push_back({meetingTimings[i][1],-1});
	}

	sort(timeline.begin(), timeline.end());

	int cnt=0;
	int result=0;
	for (int i=0; i<timeline.size(); i++){
		cnt+=timeline[i].second;
		result=max(result,cnt);
	}

	return result;
}
*/

//2
/*
int numDuplicates(vector<string> name, vector<int> price, vector<int> weight) {

	vector<string> ss;
	for (int i=0; i<name.size(); i++){
		ss.push_back(name[i]+" "+to_string(price[i])+" "+to_string(weight[i]));
	}

	sort(ss.begin(),ss.end());
	int dupCnt = ss.end()-unique(ss.begin(), ss.end());

	return dupCnt;
}
*/

//3
/*
int findLargestSquareSize(vector<vector<int>> samples) {

	int answer = 0;
	int len = samples.size();

	for (int i = 1; i < len; i++) {
		for (int j = 1; j < len; j++) {
			if (samples[i][j] == 1) {
				samples[i][j] = 1 + min({ samples[i - 1][j - 1],samples[i - 1][j],samples[i][j - 1] });
				answer = max(answer, samples[i][j]);
			}
		}
	}

	return answer;
}
*/

//4
/*
int programmerStrings(string s) {

	vector<pair<char, int>> cnt, std;

	std.push_back({'p',1});
		std.push_back({'r',3});
			std.push_back({'o',1});
				std.push_back({'g',1});
					std.push_back({'a',1});
						std.push_back({'m',2});
							std.push_back({'e',1});

	cnt.push_back({'p',0});
		cnt.push_back({'r',0});
			cnt.push_back({'o',0});
				cnt.push_back({'g',0});
					cnt.push_back({'a',0});
						cnt.push_back({'m',0});
							cnt.push_back({'e',0});

	int len = s.length();
	bool keepGo = true;
	int start, end;
	for (start=0; keepGo; start++){

		for (int i=0; i<7; i++){
			if (s[start]==std[i].first){
				cnt[i].second++;
			}
		}

		if (start>=9){
			for (int i=0; i<7; i++){
				if (std[i].second>cnt[i].second) break;
				if (i==6) keepGo=false;
			}
		}
	}

	for (int i=0; i<7; i++) {
		cnt[i].second=0;
	}
	keepGo=true;
	for (end=len-1; keepGo; end--){
		for (int i=0; i<7; i++){
			if (s[end]==std[i].first){
				cnt[i].second++;
			}
		}

		if (end<=len-10){
			for (int i=0; i<7; i++){
				if (std[i].second>cnt[i].second) break;
				if (i==6) keepGo=false;
			}
		}
	}

	return end-start+1;
}
*/

//5
/*
int countWaysToColorHouses(int n) {

	int result;
	vector<long long> memo(1);

	memo.push_back(6);

	int half_n = n/2;
	for (int i=2; i<=half_n; i++){
		memo.push_back(memo[i-1]*3);
	}

	return memo[half_n]%(1000000007);

}

int countWaysToColorHouses(int n) {

	long long result = 2;

	for (int i=0; i<n/2; i++){
		result*=3;
		result=result%1000000007;
	}

	return result;

}
*/