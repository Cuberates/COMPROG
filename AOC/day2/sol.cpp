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

bool check(const vector<int>& v) { 
	string state = "increasing";	
	assert(v.size() >= 2);
	if(v[1] == v[0]) return false; 
	else if(v[1] < v[0]) state = "decreasing";
	else state = "increasing";

	for(int i = 1; i < v.size(); i++) { 
		if(v[i] > v[i-1] && state == "decreasing") return false; 
		if(v[i] < v[i-1] && state == "increasing") return false; 
		if(v[i] == v[i-1] || abs(v[i]-v[i-1]) > 3) return false; 
		continue;
	}
	return true; 
}

bool check2(const vector<int> &v) { 
	for(int rem = 0; rem < v.size(); rem++) { 
		vector<int> temp; 
		for(int i = 0; i < v.size(); i++) { 
			if(i != rem) temp.push_back(v[i]);
		}
		if(check(temp)) return true; 
	}
	return false; 
}

int main(void) { 
	vector<vector<int> > input;
	ifstream in("input");
	string l; 
	while(getline(in, l)) { 
		vector<int> r; 
		stringstream ss(l);
		int n; 
		while(ss >> n) { 
			r.push_back(n);
		}
		input.push_back(r);
	}

	// cout << input.size() << "\n";
	int ans = 0; 
	for(auto v : input) { 
		ans += check2(v);
	}
	cout << ans << "\n";
}
