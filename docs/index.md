---
title: Index
---

# {{ site.title }}

{% assign sorted_pages = site.pages | sort: "url" %}
{% assign cur_l1 = "" %}
{% assign cur_l2 = "" %}
{% assign cur_l3 = "" %}
{% assign ul_open = false %}

{% for p in sorted_pages %}
{% assign parts = p.url | split: "/" %}

{% if parts.size >= 4 %}
{% assign l1 = parts[1] %}
{% assign l2 = parts[2] %}
{% if parts.size >= 5 %}
{% assign l3 = parts[3] %}
{% else %}
{% assign l3 = "" %}
{% endif %}

    {%- comment -%} Level 1 Heading {%- endcomment -%}
    {% if l1 != cur_l1 %}
      {% if ul_open %}</ul>{% assign ul_open = false %}{% endif %}
      {% assign cur_l1 = l1 %}
      {% assign cur_l2 = "" %}
      {% assign cur_l3 = "" %}
      <h2>{{ l1 | replace: "-", " " | capitalize }}</h2>
    {% endif %}

    {%- comment -%} Level 2 Heading {%- endcomment -%}
    {% if l2 != cur_l2 %}
      {% if ul_open %}</ul>{% assign ul_open = false %}{% endif %}
      {% assign cur_l2 = l2 %}
      {% assign cur_l3 = "" %}
      <h3>{{ l2 | replace: "-", " " | capitalize }}</h3>
    {% endif %}

    {%- comment -%} Level 3 Heading (Optional) {%- endcomment -%}
    {% if l3 != cur_l3 %}
      {% if ul_open %}</ul>{% assign ul_open = false %}{% endif %}
      {% assign cur_l3 = l3 %}
      {% if l3 != "" %}
        <h4>{{ l3 | replace: "-", " " | capitalize }}</h4>
      {% endif %}
    {% endif %}

    {% unless ul_open %}
      <ul>
      {% assign ul_open = true %}
    {% endunless %}

    <li>
      <a href="{{ p.url | relative_url }}">{{ p.title | default: parts.last }}</a>
    </li>

{% endif %}
{% endfor %}

{% if ul_open %}</ul>{% endif %}
