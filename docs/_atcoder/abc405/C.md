---
title: Sum of Product
difficulty: 102
techniques: [累積和]
---

# ABC405C - Sum of Product

長さ$N$の数列$A=(A_1,A_2,...,A_N)$のペアごとの積の総和を求めよという問題文です。もっと厳密に、$\Sigma_{1\leq i < j \leq N}A_iA_j$を求めよ。

例えば、$A=(1,2,3,4)$であれば、$A_1A_2+A_1A_3+A_1A_4+A_2A_3+A_2A_4+A_3A_4 = 36$.
Pythonの`itertools.combinations`でも解けると思いますが、累積和配列でも計算できると気づきました。

$$
A=(1,2,3,4); S=(10,9,7,4)
$$

尾から総和を求めてから、$1 \leq i < N$を満たす任意の$i$で、$A_iS_{i+1}$になります。この方法で、二周では十分です。
