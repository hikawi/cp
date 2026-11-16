#include <bits/stdc++.h>
#define rep(i, n) for (ll(i) = 0; (i) < (n); i++)
using namespace std;
using ll = long long;

int inf = 1 << 30;
ll h, w, d;
vector<string> G;
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
vector<int> dist;

ll ec(ll x, ll y) {
  return y * w + x;
}

int main() {
  cin >> h >> w >> d;
  G = vector<string>(h);
  rep(i, h) cin >> G[i];
  dist = vector<int>(h * w, inf);

  queue<pair<int, int>> q; // (cur, cost)
  rep(y, h) rep(x, w) if (G[y][x] == 'H') {
    q.emplace(ec(x, y), 0);
    dist[ec(x, y)] = 0;
  }
  while (!q.empty()) {
    auto [cur, cost] = q.front();
    q.pop();
    if (dist[cur] < cost)
      continue;
    rep(i, 4) {
      int nx = (cur % w) + dx[i], ny = (cur / w) + dy[i];
      int nid = ec(nx, ny);
      int alt = cost + 1;
      if (nx < 0 || nx >= w || ny < 0 || ny >= h || G[ny][nx] == '#' || alt > d || dist[nid] <= alt)
        continue;
      dist[nid] = alt;
      q.emplace(nid, alt);
    }
  }

  ll ans = 0;
  for (auto a : dist)
    if (a != inf)
      ans++;
  cout << ans << endl;
  return 0;
}
