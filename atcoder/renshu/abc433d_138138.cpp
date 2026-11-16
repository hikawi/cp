#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using i128 = __int128;
using ul = unsigned long long;

ul countdigits(ul a) {
  ul c = 0;
  while (a) {
    c++;
    a /= 10;
  }
  return c;
}

ul euclidmod(i128 a, ll m) {
  ll ans = a % m;
  if (ans < 0)
    ans += m;
  return ans;
}

int main() {
  ll n, m;
  cin >> n >> m;

  vector<i128> TEN(11, 1);
  for (int i = 1; i < 11; i++)
    TEN[i] = TEN[i - 1] * 10;

  vector<ll> A(n);
  vector<map<ll, ll>> M(11);
  for (int i = 0; i < n; i++) {
    cin >> A[i];
    M[countdigits(A[i])][euclidmod(A[i], m)]++;
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    // k = digits(Aj)
    // Ai * 10^k + Aj mod M = 0
    // => Ai * 10^k congruent to -Aj mod M
    // => -Ai * 10^k congruent to Aj mod M?
    for (int j = 1; j < 11; j++) {
      ll mod = euclidmod(-A[i] * TEN[j], m);
      auto &mp = M[j];
      if (mp.find(mod) != mp.end())
        ans += mp[mod];
    }
  }
  cout << ans << endl;

  // for (int i = 1; i < 11; i++) {
  //   cout << "--- " << i << " ---\n";
  //   for (auto [k, v] : M[i])
  //     cout << k << ": " << v << "\n";
  // }
}
