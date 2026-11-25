---
title: "Three Point Angle"
difficulty: 1999
techniques: [全探索, 尺取り法]
---

# 009 - Three Point Angle (★6)

座標平面上に$N$個の頂点があります。どの三つを選び、その三個の頂点からなる角度の最大値を求めるという問題です。

制約によると、各要素に$O(n)$の操作ができそうです。

まず、二個の頂点を固定して、他の頂点集合からどれを選ぶべきか、判定しようと思いましたが、二分探索などでも$O(\log N)$あるいは$O(1)$で求めることが無理そうです。

そうしたら、自分のノートに描いてみると、各頂点を固定しながら、他の頂点をソートできれば、尺取り法で角度最大値が求められると思います。いかにも、昔から襲ってきた悪夢のように、Most Brilliant Starry Skyという問題を思いつくので、その時解説によると、`atan2`を使わずに、角度でソートすることができると覚えるので、Googleで探検しながら実装しましたので、結構時間かかりましたが、最初の青色レートのACなんです。

```cpp
// atan2を使わずにソート
sort(all(local), [](pi &a, pi &b) {
  ll pa = a.second < 0;
  ll pb = b.second < 0;
  if (pa != pb) {
    return pa < pb;
  }

  ll cross = a.first * b.second - a.second * b.first;
  return cross >= 0;
});
```
