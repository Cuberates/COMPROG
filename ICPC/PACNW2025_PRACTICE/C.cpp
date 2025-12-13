#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  // int N; cin >> N;
  int num_green_herb = 0, num_red_herb = 0;
  cin >> num_green_herb >> num_red_herb;
  
  vector<vector<int> > dp(num_green_herb + 1, vector<int>(num_red_herb + 1, 0));
  dp[0][0] = 0;

  for(int i = 0; i <= num_green_herb; i++) { 
    for(int j = 0; j <= num_red_herb; j++) { 
      if (i>=1) dp[i][j] = max(dp[i][j], dp[i-1][j] + 1);
      if (i>=2) dp[i][j] = max(dp[i][j], dp[i-2][j] + 3);
      if (i>=3) dp[i][j] = max(dp[i][j], dp[i-3][j] + 10);
      if (i>=1 && j>=1) dp[i][j] = max(dp[i][j], dp[i-1][j-1] + 10);
    }
  }
  cout << dp[num_green_herb][num_red_herb] << "\n"; 
}