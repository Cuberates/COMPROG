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

#define fi first
#define se second
#define inf 1e9+1

typedef pair<int,int> pii;

using namespace std;

class Node { 
  public:
  Node (int x = -1, int y = -1) {
    d1.fi = inf; d1.se = inf; 
    d2.fi = inf; d2.se = inf;  
    loc.fi = x; loc.se = y;
  } 
  pii d1, d2;
  pii loc;
};

int r, c, n;
vector<pii> t;
vector<vector<Node> > grid;

int d(const Node& n1, const Node& n2) { 
  int dx = abs(n1.loc.fi - n2.loc.fi);
  int dy = abs(n2.loc.se - n2.loc.se);
  return dx + dy;
}

void bfs(pii u, int x) {
  vector<vector<bool> > vis(r, vector<bool>(c, 0));
  queue<pii> q;
  q.push(u);
  while (!q.empty()) { 
    pii top = q.front(); 
    q.pop(); 
    vis[u.fi][u.se] = 1;    
    Node &home = grid[top.fi][top.se];
    Node &tower = grid[u.fi][u.se];
    auto dist = d(home, tower);
    if (dist < home.d1.fi) { 
      home.d1.fi = dist; 
      home.d1.se = x;
      // continue exploring 
      if (home.loc.fi + 1 < r) { 
        Node newNode(home.loc.fi+1, home.loc.se);
        
      }

    } else if (dist < home.d2.fi) { 
      home.d2.fi = dist; 
      home.d2.se = x; 
    }
  }

} 

int main(void) { 
  cin >> r >> c >> n;
  t = vector<pii>(n);
  grid = vector<vector<Node> >(r, vector<Node>(c));
  for(int i = 0; i < n; i++) {
    int x, y; 
    cin >> x >> y;
    t[i] = make_pair(x, y);
  }
  for(int i = 0; i < r; i++) { 
    for(int j = 0; j < c; j++) {
      grid[i][j] = Node(i+1, j+1);
    }
  }
  for(int i = 0; i < n; i++) { 
    bfs(t[i], i+1);
  }
  for(int i = 0; i < r; i++) { 
    for(int j = 0; j < c; j++) { 
      cout << grid[i][j].d1.se << " ";
    }
    cout << "\n";
  }
  for(int i = 0; i < r; i++) { 
    for(int j = 0; j < c; j++) { 
      cout << grid[i][j].d2.se << " ";
    }
    cout << "\n";
  }
   
}