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
      {% assign filename = item.path | split: "/" | last | remove: ".md" %}
      {% unless filename == "index" %}
        {% assign chars = filename | split: "" %}
        {% assign contest = "" %}
        {% assign prob = "" %}
        {% assign found_letter = false %}

        {% for c in chars %}
          {% unless found_letter %}
            {% if c == "0" or c == "1" or c == "2" or c == "3" or c == "4" or c == "5" or c == "6" or c == "7" or c == "8" or c == "9" %}
              {% assign contest = contest | append: c %}
            {% else %}
              {% assign found_letter = true %}
              {% assign prob = prob | append: c %}
            {% endif %}
          {% else %}
            {% assign prob = prob | append: c %}
          {% endunless %}
        {% endfor %}

        {% assign prob_up = prob | upcase %}
        {% assign cf_url = "https://codeforces.com/problemset/problem/" | append: contest | append: "/" | append: prob_up %}

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
          <td><a href="{{ item.url | relative_url }}">{{ contest }}{{ prob_up }}</a></td>
          <td>{{ item.title }}</td>
          <td><span class="diff-badge {{ diff_class }}">{{ item.difficulty | default: "-" }}</span></td>
          <td>{{ item.techniques | join: "・" }}</td>
          <td><a href="{{ cf_url }}">CF ↗</a></td>
        </tr>
      {% endunless %}
    {% endfor %}

  </tbody>
</table>
