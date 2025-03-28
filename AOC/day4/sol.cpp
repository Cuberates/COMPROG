#include <iostream> 
#include <vector> 
#include <string> 
#include <cmath> 
#include <map>
#include <set> 
#include <fstream>
#include <sstream>
#include <cassert>

long long searchDiagonal(const std::vector<std::string> &grid) {
	long long ans = 0;
	for(int i = 0; i < grid.size(); i++) { 
		for(int j = 0; j < grid[i].size(); j++) { 
			int x = i, y = j; 
			int k = 0; 
			std::string buffer = ""; 
			while(x < grid.size() && y < grid[x].size() && k < 4) {
				buffer += grid[x][y];
				x++; 
				y++; 
				k++;
			}
			if(buffer == "XMAS") { 
				ans++; 	
			} else { 
				std::reverse(buffer.begin(), buffer.end());
				if(buffer == "XMAS") ans++; 
				else continue;
			}
		}
	}
	for(int i = 0; i < grid.size(); i++) { 
		for(int j = 0; j < grid[i].size(); j++) { 
			int x = i, y = j; 
			int k = 0; 
			std::string buffer = ""; 
			while(x >= 0 && y < grid[x].size() && k < 4) {
				buffer += grid[x][y];
				x--; 
				y++; 
				k++;
			}
			if(buffer == "XMAS") { 
				ans++; 	
			} else { 
				std::reverse(buffer.begin(), buffer.end());
				if(buffer == "XMAS") ans++; 
				else continue;
			}
		}
	}
	return ans; 
}

long long searchHorizontal(const std::vector<std::string> &grid) {
	long long ans = 0; 
	for(int i = 0; i < grid.size(); i++) { 
		for(int j = 0; j < grid[i].size(); j++) { 
			if(!(j + 3 < grid[i].size())) continue; 
			std::string buffer = ""; 
			for(int k = 0; k < 4; k++) { 
				buffer += grid[i][j + k]; 
			}
			if(buffer == "XMAS") ans++; 
			else { 
				std::reverse(buffer.begin(), buffer.end());
				if(buffer == "XMAS") ans++; 
				else continue;
			}
			
		}
	}
	return ans; 
}
long long searchVertical(const std::vector<std::string> &grid) {
	long long ans = 0; 
	for(int i = 0; i < grid.size(); i++) { 
		for(int j = 0; j < grid[i].size(); j++) { 
			if(!(j + 3 < grid.size())) continue; 
			std::string buffer = ""; 
			for(int k = 0; k < 4; k++) { 
				buffer += grid[j + k][i]; 
			}
			if(buffer == "XMAS") ans++; 
			else { 
				std::reverse(buffer.begin(), buffer.end());
				if(buffer == "XMAS") ans++; 
				else continue;
			} 
		}
	}
	return ans;
}

bool valid(const std::vector<std::string> &square) { 
	std::string diag1 = "", diag2 = ""; 
	// std::cout << square[0][0] << "\n";
	diag1 += square[0][0];
	diag1 += square[1][1];
	diag1 += square[2][2];
	diag2 += square[2][0];
	diag2 += square[1][1];
	diag2 += square[0][2];
	// std::cout << diag1 << " " << diag2 << "\n";
	std::string rev_diag1 = diag1; reverse(rev_diag1.begin(), rev_diag1.end()); 
	std::string rev_diag2 = diag2; reverse(rev_diag2.begin(), rev_diag2.end());

	if((rev_diag1 == "MAS" || diag1 == "MAS") && (diag2 == "MAS" || rev_diag2 == "MAS")) {
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) { 
				std::cout << square[i][j];
			}
			std::cout << "\n";
		}
		std::cout << "\n";
		return 1;
	}
	
	return 0;
}

long long solve(const std::vector<std::string> &grid) { 
	long long ans = 0; 
	int rsize = grid.size(), csize = grid[0].size(); 
	for(int i = 0; i < rsize - 2; i++) {
		for(int j = 0; j < csize - 2; j++) {
			std::vector<std::string> square;
			for(int k = i; k < i + 3; k++) {
				std::string row = ""; 
				for(int l = j; l < j + 3; l++) {
					row.push_back(grid[k][l]);
				}
				square.push_back(row);
			}
			if(valid(square)) ans++; 
		}
	}
	return ans; 
}

int main(void) { 
	std::vector<std::string> grid; 
	std::string tokens; 
	while(std::cin >> tokens) { 
		grid.push_back(tokens);
	}
	// for(auto &s : grid) { 
	// 	std::cout << s << "\n";
	// }

	std::cout << solve(grid) << "\n";
	return 0; 
}



