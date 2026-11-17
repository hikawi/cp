#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  ll n, m;
  cin >> n >> m;
  ll ans = 0;
  for (ll i = 0; i < (1 << m); i++) {
    ans += (n - m) * 100;
    ans += 1900 * m;
  }
  cout << ans << endl;
}
