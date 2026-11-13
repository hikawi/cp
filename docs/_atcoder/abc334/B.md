---
title: Christmas Trees
difficulty: 479
techniques: [数学]
---

# ABC334B - Christmas Trees

無限に続いている線にて、座標$A$から双方向に$M$マスごとに木を植える（$A$も含む）。座標$L$と$R$の中にはいくつの木が立っているの求めよ（$L$と$R$座標の木も含む）。これは最初簡単だと思いましたが、自分の計算仕方は時々ただ１ずれていますから、ACはできませんでした。

```python
inside = (r - l - 1) // m
left = (l % m) == (a % m)
right = (r % m) == (a % m)

print(inside + left if l == r else inside + left + right)
```

こうなら、

```plaintext
   0 2
..#..#..#..#
    ^ ^
    L R

A = 0
M = 2
L = 1
R = 3
```

この場合には間違ってしまいます。コードのように計算してみると

$$
\lfloor \frac{R-L-1}{M} \rfloor = \lfloor \frac{3-1-1}{2} \rfloor = 0
$$

でも、確かに中には一個があったではありませんか。なので、正解なのは、両方$A$引いて計算すべきです。それで$0$から$R-A$までいくつの木が立っているのかと、$0$から$L-A-1$引けば結果となるという理解です。
