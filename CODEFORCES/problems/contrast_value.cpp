// Headers from chenjb
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
void IO() { ios_base::sync_with_stdio(false); 
            cout.tie(0); cin.tie(0); }
// constants
const int maxN            = 3e5+1;
const int inf             = 1e9+10;
// data structure
// typedef pair<int, int>        pii;
// typedef map<int, int>         mii;
// typedef map<char, int>        mci;
// typedef priority_queue<int>   pq;
typedef long long             ll;
// typedef vector<int>           vi;
#define vt vector

// operations and loops
// #define FOR(i, a, b)    for(int(i)=(a);(i)<=(b);(i)++)
// #define FORR(i, a, b)   for(int(i)=(a);(i)>=(b);(i)--)
#define pb              push_back
#define all(x)          (x).begin(), (x).end()
#define len(x)          (x).length() 
#define size(x)         (x).size()

/**
 * helpful mentality ^-^
 * . check for parity -> 50% of test cases are solved
 * . n >= k -> ((1e9 - k) / 1e9) * 100% of test cases are solved
 * . unordered ops -> sort the damn thing
 * . small n -> case work or brute force
 * . clear everything pls
 * . cp handbook for algs: 
 *      binary search, 
 *      sliding window, 
 *      2-pointers, primality, 
 *      dp, dfs, bfs, dijkstra,...
 * . some problems can't be gabagooed and that's fine 
**/

void gabagoo() {
   int n; cin >> n; 
   vt<int> a(n);
   for(int i = 0; i < n; i++)
      cin >> a[i];
   vt<int> r(n);
   int k = 0; 
   r[k++] = a[0];
   for(int i = 1; i < n; i++) { 
      if(a[i] != a[i-1]) {
         r[k++] = a[i];
      }
   }
   int rs = k; 
   if (rs <= 1) cout << 1; 
   else if(rs <= 2) cout << 2; 
   else { 
      int in = 0; 
      int cnt = 2;

      for(int i = 1; i < rs; i++) {
         if (i == 1) { 
            if (r[i] > r[i-1]) in = 1; 
            else in = -1;   
         }
         if (r[i] > r[i-1] && in == -1) { 
            in = 1; 
            cnt++;
            continue; 
         }
         if (r[i] < r[i-1] && in == 1) { 
            in = -1; 
            cnt++; 
            continue; 
         }
      }
      cout << cnt; 
   }
   cout << "\n";
}  

int main(void) { 	
   IO(); // disable synchronization  
   int tests = 1;
   cin >> tests; 
   for(int i = 0; i < tests; i++) {
      gabagoo(); 
   }
}
