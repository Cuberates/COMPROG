#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
 
using namespace std;
 
int main(void) {
	string s; 
	cin >> s; 
	map<int,int> char_count; 
	for(char &c : s) char_count[c]++; 
 
	int odd = 0; char center; 
	for(auto &count : char_count) {
		if(count.second % 2 != 0) {
			odd++; 
			center = count.first;
		}
	}
	if(odd > 1) cout << "NO SOLUTION \n";
	else {
		string answer_start = "";  
		for(auto &count: char_count) {
			if(count.second % 2 == 0) {
				for(int i = 0; i < count.second / 2; i++) {
					answer_start.push_back(count.first);
				}
			}
		}
		string answer_center = "";
		for(int i = 0; i < char_count[center]; i++) {
			answer_center.push_back(center);
		}
		string answer_end = "";
		for(auto &count: char_count) {
			if(count.second % 2 == 0) {
				for(int i = 0; i < count.second / 2; i++) {
					answer_end.push_back(count.first);
				}
			}
		}
		reverse(answer_end.begin(), answer_end.end()); 
		cout << answer_start << answer_center << answer_end << "\n";
 
 
	}
}