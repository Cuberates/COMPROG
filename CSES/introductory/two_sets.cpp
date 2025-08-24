#include <iostream> 
#include <vector>
 
using namespace std;
 
int main () {
	long long N;
	cin >> N;
	long long sum = N * (N + 1) / 2;
	if (sum % 2 != 0) cout << "NO \n";
	else {
		cout << "YES \n";
		vector<int> choose(N, 0); 
		vector<int> set_1, set_2; 
		long long average_sum = sum /2, current_sum = 0; 
		// for(int i = N-1; i >= 0; i--) {
		// 	if(current_sum + (i+1) <= average_sum) { 
		// 		current_sum += (i+1);
		// 		choose[i] = 1; 
		// 		set_1.push_back(i+1);
		// 	}
		// }

		for(int i = N; i >= 1; i--) {
			if (current_sum + i <= average_sum) {
				current_sum += i; 
				set_1.push_back(i);
				// choose[i] = 1; 
			} else set_2.push_back(i);
		}
		cout << set_1.size() << "\n";
		for(int &x : set_1) cout << x << " ";
		cout << "\n";
		cout << set_2.size() << "\n";

		for(int &x : set_2) cout << x << " ";
	}
}