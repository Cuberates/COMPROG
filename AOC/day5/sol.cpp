#include <iostream> 
#include <vector> 
#include <string> 
#include <cmath> 
#include <map>
#include <set> 
#include <fstream>
#include <sstream>
#include <cassert>

using namespace std;

int stringToLL(const string &s) { 
	int ans = 0; 
	for(int i = 0; i < s.length(); i++) { 
		ans = (ans * 10) + (s[i] - '0');
	}
	return ans; 
}

pair<int,int> process1(const string &tokens) {
	string firstNum = "", secondNum = ""; 
	bool comma = false; 
	for(int i = 0; i < tokens.length(); i++) {
		if(tokens[i] == '|') comma = true; 
		else if(comma == false) firstNum.push_back(tokens[i]);
		else secondNum.push_back(tokens[i]);
	}
	pair<int,int> ans; 
	ans.first = stringToLL(firstNum);
	ans.second = stringToLL(secondNum);
	return ans; 
}

int main(void) { 
	vector<pair<int,int>> ordering; 

	string tokens;
	while(cin >> tokens) {
		auto pairs = process1(tokens);
		ordering.push_back(pairs);
	}



	return 0; 
}