#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using i128 = __int128;

int main() {
  ll x, y, a, b;
  cin >> x >> y >> a >> b;
  i128 res = x, goal = y;
  ll e = 0;
  while (res * a <= res + b && res * a < goal) {
    res *= a;
    e++;
  }
  e += (goal - 1 - res) / b;
  cout << e << endl;
}
