#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll inf = 1ll << 60;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> adj(1024 * (n + 1));
  for (int i = 0; i < m; i++) {
    ll u, v, w;
    cin >> u >> v >> w;
    for (int j = 0; j < 1024; j++) {
      adj[u * 1024 + j].push_back(v * 1024 + (j ^ w));
    }
  }

  queue<ll> q;
  vector<ll> dist(1024 * (n + 1));
  dist[1 * 1024] = 1;
  q.push(1 * 1024);

  while (!q.empty()) {
    auto cur = q.front();
    q.pop();
    for (auto n : adj[cur]) {
      if (dist[n])
        continue;
      dist[n] = 1;
      q.push(n);
    }
  }

  for (int i = 0; i < 1024; i++)
    if (dist[n * 1024 + i]) {
      cout << i << endl;
      return 0;
    }
  cout << -1 << endl;
}
