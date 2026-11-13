---
title: 競プロメモ
---

# 自分用のメモ

{% assign cf_count = site.codeforces | where_exp: "i", "i.name != 'index.md'" | size | minus: 1 %}
{% assign ac_count = site.atcoder | where_exp: "i", "i.name != 'index.md'" | size | minus: 1 %}

- **[Codeforces](./codeforces/)** ({{ cf_count }}問)
- **[AtCoder](./atcoder/)** ({{ ac_count }}問)

普通のノートには問題文が再び載っていませんので、直接にコンテストのサイトをご参考ください。

> このサイトには自分用のメモのためしかないので、こういうのテンプレートはAIによって生成されていました。
