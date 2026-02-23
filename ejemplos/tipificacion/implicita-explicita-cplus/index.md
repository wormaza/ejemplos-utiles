---
title: Tipificación implícita y explícita en C++
---

# Tipificación en C++

**Lenguaje:** C++  
**Concepto:** Tipificación, Memoria  
**Ramos:** Programación avanzada para ciencias  

## Descripción
Diferencias de como opera la tipificación en C++:
* Al indicar *explicitamente* el tipo (por ejemplo, ```int x```) la tipificación es **explícita**.
* C++ permite *inferir* el tipo a partir de la evaluación de la expresión, utilizando ```auto```, lo cual sería tipificación **inplícita**.
  * Por ejemplo: ```auto x = 1 + 2```, el tipo asociado a ```x``` se infiere a partir del resultado de la expresión ```1 + 2```.
  * Esta inferencia se realiza en tiempo de *compilación*.  
  *  ⚠️ Notar que esto es en C++, ya que en C **NO** tiene este significado.
* 📝 Independiente de si es *explícito* o *implícito*, el tipado es **estático**, es decir, **NO** puede modificar su tipo.

## Código
📦 [Descargar código](code/main.cpp)
