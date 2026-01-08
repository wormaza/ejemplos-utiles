---
title: 001.c Por lenguaje
---

# 🧑‍💻 Ejemplos por lenguaje

{% assign langs = "" | split: "" %}

{% for ex in site.data.examples %}
  {% for lang in ex.language %}
    {% unless langs contains lang %}
      {% assign langs = langs | push: lang %}
    {% endunless %}
  {% endfor %}
{% endfor %}

{% for lang in langs %}
## {{ lang }}

{% for ex in site.data.examples %}
  {% if ex.language contains lang %}
- [{{ ex.title }}]({{ site.baseurl }}/{{ ex.path }})
  {% endif %}
{% endfor %}

{% endfor %}
