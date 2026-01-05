---
title: Por ramo
---

# 🎓 Ejemplos por ramo

{% raw %}
{% assign courses = "" | split: "" %}

{% for ex in site.data.examples %}
  {% unless courses contains ex.course %}
    {% assign courses = courses | push: ex.course %}
  {% endunless %}
{% endfor %}

{% for course in courses %}
## {{ course }}

{% for ex in site.data.examples %}
  {% if ex.course == course %}
- [{{ ex.title }}]({{ site.baseurl }}/{{ ex.path }})
  {% endif %}
{% endfor %}

{% endfor %}
{% endraw %}
