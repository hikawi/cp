---
title: Line Sensor
difficulty: 48
techniques: [実装]
---

# ABC274B - Line Sensor

ある行列$H\times W$が与えられて、`#`があったら、箱がその座標に置かれている。`.`があったら、空マスである。列ずつの箱数を求めよ。

これは問題になれないと思いますが、`cin`から入力を読み込んでいるところにも計算できます。それに、APLのような配列言語を使ったら、配列を転置してマスクしてから和関数で削減すればいいです。[Uiuaの提出](https://atcoder.jp/contests/adt_all_20261005_2/submissions/79814847)も載っていました。

```uiua
&p↘¯1↘1$"_"/+=@#⍥(&sc) ◌[] ⊢⊜⋕⊸≠@  &sc
```
