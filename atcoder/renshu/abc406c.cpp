#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  vector<ll> P(n);
  for (int i = 0; i < n; i++)
    cin >> P[i];

  ll i = 0, ans = 0;
  while (i < n) {
    if (i + 4 > n || P[i] > P[i + 1]) {
      i++;
      continue;
    }
    ll j = i + 1;
    // find first local max. it's impossible for a local min to appear before
    while (j < n - 1 && !(P[j] > P[j - 1] && P[j] > P[j + 1]))
      j++;
    if (j >= n - 1) {
      // no local max
      i = j;
      continue;
    }

    // find next local min.
    ll k = j + 1;
    while (k < n - 1 && !(P[k] < P[k - 1] && P[k] < P[k + 1]))
      k++;
    if (k >= n - 1) {
      // no local min
      i = k;
      continue;
    }

    // k is local min.
    // find how much can we extend before a local max
    ll l = k + 1;
    while (l < n - 1 && !(P[l] > P[l - 1] && P[l] > P[l + 1]))
      l++;

    // cout << "i=" << i << ",j=" << j << ",k=" << k << ",l=" << l << endl;
    ans += (j - i) * (l - k);
    i = k;
  }

  cout << ans << endl;
}
