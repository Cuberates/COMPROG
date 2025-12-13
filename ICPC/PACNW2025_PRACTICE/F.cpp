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

bool compare(const string &u, const string &v) {
  return u.length() < v.length();
}

int cost(const string &team_name) { 
  return team_name.length();
}

bool is_eligible (const string &team_name) { 
  set<char> used_letters;
  for(char c : team_name) {
    if(used_letters.count(c))
      return false;
  }
  return true;
}

int main(void) {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  
  int num_problems, num_teams; 
  cin >> num_problems >> num_teams;   

  vector<string> teams(num_teams);
  for(int i = 0; i < num_teams; i++)
    cin >> teams[i];

  sort(teams.begin(), teams.end(), compare);
 
}