---
title: Por ramo
---

# 🎓 Ejemplos por ramo

{% assign courses = "" | split: "" %}

{% for ex in site.data.examples %}
  {% for c in ex.courses %}
    {% unless courses contains c %}
      {% assign courses = courses | push: c %}
    {% endunless %}
  {% endfor %}
{% endfor %}

{% for course in courses %}
## {{ course }}

{% for ex in site.data.examples %}
  {% if ex.courses contains course %}
- [{{ ex.title }}]({{ site.baseurl }}/{{ ex.path }})
  {% endif %}
{% endfor %}

{% endfor %}
