---
title: Codeforces
---

{% assign items = site.codeforces | sort: "path" %}

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
        {% assign prob = parts[2] | upcase %}
        {% assign cf_url = "https://codeforces.com/problemset/problem/" | append: contest | append: "/" | append: prob %}

        {% assign diff = item.difficulty | plus: 0 %}
        {% if item.difficulty == nil or item.difficulty == "" %}
          {% assign diff_class = "cf-gray" %}
        {% elsif diff < 1200 %}
          {% assign diff_class = "cf-gray" %}
        {% elsif diff < 1400 %}
          {% assign diff_class = "cf-green" %}
        {% elsif diff < 1600 %}
          {% assign diff_class = "cf-cyan" %}
        {% elsif diff < 1900 %}
          {% assign diff_class = "cf-blue" %}
        {% elsif diff < 2100 %}
          {% assign diff_class = "cf-violet" %}
        {% elsif diff < 2400 %}
          {% assign diff_class = "cf-orange" %}
        {% else %}
          {% assign diff_class = "cf-red" %}
        {% endif %}

        <tr>
          <td><a href="{{ item.url | relative_url }}">{{ contest | upcase }}{{ prob }}</a></td>
          <td>{{ item.title }}</td>
          <td><span class="diff-badge {{ diff_class }}">{{ item.difficulty | default: "-" }}</span></td>
          <td>{{ item.techniques | join: "・" }}</td>
          <td><a href="{{ cf_url }}">CF ↗</a></td>
        </tr>
      {% endif %}
    {% endfor %}
  </tbody>
</table>