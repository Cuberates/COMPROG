// #ifdef ONLINE_JUDGE
// #include <bits/stdc++.h>
// #else
// #include "../../CODEFORCES/template.h"
// #endif

// Template from Chenjb
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

#define ll long long

int main(void) { 	
  ios_base::sync_with_stdio(false);
  cin.tie(0); 

  int n; 
  while (cin >> n) {
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    if (n <= 1) {
      cout << "Jolly\n";
      continue; 
    }
    vector<int> cnt(n); 
    for(int i = 0; i < n; i++) {
      if (i > 0 && abs(a[i]-a[i-1]) <= n-1) cnt[abs(a[i]-a[i-1])]=1;
    }
    int ok = true;
    for(int i = 1; i < n; i++) { 
      if (!cnt[i]) ok = false; 
    }
    cout << (ok ? "Jolly" : "Not Jolly") << "\n";
  } 
  
}
