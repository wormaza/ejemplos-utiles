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

{% for c in courses %}
## {{ c }}

{% for ex in site.data.examples %}
  {% if ex.courses contains c %}
- [{{ ex.title }}]({{ site.baseurl }}/{{ ex.path }})
  {% endif %}
{% endfor %}

{% endfor %}