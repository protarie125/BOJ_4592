#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll N;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (true) {
    cin >> N;
    if (N == 0) break;

    auto x = vl(N);
    for (auto&& v : x) cin >> v;

    ll prev = -1;
    for (const auto& v : x) {
      if (prev == v) continue;

      cout << v << ' ';
      prev = v;
    }
    cout << "$\n";
  }

  return 0;
}