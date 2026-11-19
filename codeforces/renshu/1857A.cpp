#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  ll n;
  cin >> n;

  ll even = 0, odd = 0;
  while (n--) {
    ll a;
    cin >> a;
    if (a % 2 == 0)
      even++;
    else
      odd++;
  }
  if (odd % 2 == 0)
    cout << "YES\n";
  else
    cout << "NO\n";
}

int main() {
  ll t;
  cin >> t;
  while (t--)
    solve();
}
