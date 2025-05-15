#include <iostream> 
#include <vector> 
#include <map>
#include <cmath> 
#include <stack>
#include <queue>
#include <string> 
#include <random> 

#define ll long long
#define vect vector
#define MOD 1e9+7

void solve(); 

int main(void) { 	
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(0); std::cin.tie(0);

	int tests = 1;
	std::cin >> tests; 
	for(int i = 0; i < tests; i++) {
		#ifndef ONLINE_JUDGE
		for(int j = 0; j < 10; j++)
			std::cout << "-";
		#endif
		std::cout << "\n";
		solve(); 
	}	
}
void solve() { 
	int n;
	std::string a, b; 
	int nao = 0, nbo = 0, nae = 0, nbe = 0;
	std::cin >> n >> a >> b; 
	for(int i = 0; i < n; i++) { 
		if(a[i] == '1') { 
			if(i % 2 == 0) nae++; 
			else nao++; 
		}
	}
	for(int i = 0; i < n; i++) { 
		if(b[i] == '0') { 
			if(i % 2 == 0) nbe++; 
			else nbo++; 
		}
	}
	if(nao <= nbe && nae <= nbo) std::cout << "YES \n";
	else std::cout << "NO \n";
}

