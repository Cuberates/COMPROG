#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char **argv) {
   ios_base::sync_with_stdio(NULL);
   cin.tie(0); cout.tie(0);
   vector<string> inp;
   string token; 
   while(cin >> token) {
      inp.push_back(token);
   }
   string mess = ""; 
   for(string s : inp) {
      for(char c : s) {
         if(c >= 'a' && c <= 'z') mess += c; 
         if(c >= 'A' && c <= 'Z') mess += tolower(c); 
      }
   }
   int n = mess.length();
   vector<vector<int> > dp(n, vector<int>(n, -1));
   for(int i = 0; i < n; i++) dp[i][i] = 1; 
   for(int len = 2; len <= n; len++) {
      for(int l = 0; l < n; l++) {
         int r = l + len - 1; 
         if(r >= n) continue; 
         if(mess[l] == mess[r]) dp[l][r] = dp[l+1][r-1] + 2; 
         else dp[l][r] = max(dp[l+1][r], dp[l][r-1]);
      }
   }
   cout << n - dp[0][n-1] << "\n";
}

