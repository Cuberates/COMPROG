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

long long stringToLL(const string &s) { 
	long long ans = 0; 
	for(int i = 0; i < s.length(); i++) { 
		ans = (ans * 10) + (s[i] - '0');
	}
	return ans; 
}

bool isValid(const string &s) { 
	for(int i = 0; i < s.length(); i++) { 
		bool condition = ((s[i] >= '0' && s[i] <= '9') || s[i] == ',');
		if(condition == false) 
			return false;
	}
	return true;
}

pair<long long, long long> process(const string& data) { 
	int afterComma = 0; 
	string a = "", b = ""; 
	for(int i = 0; i < data.size(); i++) {
		if(data[i] == ',') afterComma = 1; 
		else if(afterComma == 0) a += data[i];
		else b += data[i];
	}	
	long long x = stringToLL(a); 
	long long y = stringToLL(b);
	return make_pair(x, y);
}

long long solve(const string &s, int l, int r, long long currentAns) { 
	if(r - l + 1 < 4)	
		return currentAns;
	string prefix = "";
	for(int i = l; i < l + 4; i++) 
		prefix += s[i];
	if(prefix != "mul(") 
		return solve(s, l + 1, r, currentAns);	
	string suffix = "";
	int i = l + 4; 
	for(i; i < r; i++) {
		if(s[i] == ')') break; 
		else suffix += s[i];
	}
	if(!isValid(suffix))	
		return solve(s, l + 1, r, currentAns);
	
	auto nums = process(suffix);
	currentAns += (nums.first * nums.second);
	return solve(s, i, r, currentAns); 
}

long long solve2(const string &s, int l, int r, long long currentAns, int doEnabled) { 
	if(r - l + 1 < 4)	
		return currentAns;
	string prefix = "";
	for(int i = l; i < l + 4; i++) 
		prefix += s[i];
	if(prefix != "mul(") {
		// Check for the do
		if(prefix == "do()") { 
			return solve2(s, l + 1, r, currentAns, 1);
		}  
		if(r - l + 1 >= 7) { 
			string prefix2 = ""; 
			for(int i = l; i < l + 7; i++) { 
				prefix2 += s[i];
			}
			if(prefix2 == "don't()") { 
				return solve2(s, l + 1, r, currentAns, 0);
			}
		}
		return solve2(s, l + 1, r, currentAns, doEnabled);
	}
	if(!doEnabled) 
		return solve2(s, l + 1, r, currentAns, doEnabled);

	string suffix = "";
	int i = l + 4; 
	for(i; i < r; i++) { 
		if(s[i] == ')') break; 
		else suffix += s[i];
	}
	if(!isValid(suffix))	
		return solve2(s, l + 1, r, currentAns, doEnabled);
	
	auto nums = process(suffix);
	currentAns += (nums.first * nums.second);
	
	return solve2(s, i, r, currentAns, doEnabled); 
}

int main(void) { 
	string str = ""; 
	string tokens; 
	while(cin >> tokens) { 
		str += tokens;
	}
	cout << solve2(str, 0, str.size(), 0, 1) << "\n";

}


