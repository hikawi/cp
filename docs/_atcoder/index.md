---
title: AtCoder
---

{% assign items = site.atcoder | sort: "path" %}

<table>
  <thead>
    <tr>
      <th>ID</th>
      <th>名前</th>
      <th>難易度</th>
      <th>種類</th>
      <th>問題リンク</th>
    </tr>
  </thead>
  <tbody>
    {% for item in items %}
      {% assign parts = item.path | remove: ".md" | split: "/" %}
      {% if parts.size >= 3 %}
        {% assign contest = parts[1] %}
        {% assign prob = parts[2] %}
        {% assign contest_low = contest | downcase %}
        {% assign prob_low = prob | downcase %}
        {% assign ac_url = "https://atcoder.jp/contests/" | append: contest_low | append: "/tasks/" | append: contest_low | append: "_" | append: prob_low %}

        {% assign diff = item.difficulty | plus: 0 %}
        {% if item.difficulty == nil or item.difficulty == "" %}
          {% assign diff_class = "ac-gray" %}
        {% elsif diff < 400 %}
          {% assign diff_class = "ac-gray" %}
        {% elsif diff < 800 %}
          {% assign diff_class = "ac-brown" %}
        {% elsif diff < 1200 %}
          {% assign diff_class = "ac-green" %}
        {% elsif diff < 1600 %}
          {% assign diff_class = "ac-cyan" %}
        {% elsif diff < 2000 %}
          {% assign diff_class = "ac-blue" %}
        {% elsif diff < 2400 %}
          {% assign diff_class = "ac-yellow" %}
        {% elsif diff < 2800 %}
          {% assign diff_class = "ac-orange" %}
        {% else %}
          {% assign diff_class = "ac-red" %}
        {% endif %}

        <tr>
          <td><a href="{{ item.url | relative_url }}">{{ contest | upcase }}{{ prob | upcase }}</a></td>
          <td>{{ item.title }}</td>
          <td><span class="diff-badge {{ diff_class }}">{{ item.difficulty | default: "-" }}</span></td>
          <td>{{ item.techniques | join: ", " }}</td>
          <td><a href="{{ ac_url }}">AC ↗</a></td>
        </tr>
      {% endif %}
    {% endfor %}
  </tbody>
</table>