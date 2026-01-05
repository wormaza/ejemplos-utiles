---
title: Por concepto
---

# 🧠 Ejemplos por concepto

{% raw %}
{% assign concepts = "" | split: "" %}

{% for ex in site.data.examples %}
  {% for c in ex.concepts %}
    {% unless concepts contains c %}
      {% assign concepts = concepts | push: c %}
    {% endunless %}
  {% endfor %}
{% endfor %}

{% for c in concepts %}
## {{ c }}

{% for ex in site.data.examples %}
  {% if ex.concepts contains c %}
- [{{ ex.title }}]({{ site.baseurl }}/{{ ex.path }})
  {% endif %}
{% endfor %}

{% endfor %}
{% endraw %}
