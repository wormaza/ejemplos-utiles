---
title: Coerción y conversión en C/C++
---

# Coerción vs Conversión en C/C++

**Lenguaje:** C/C++  
**Concepto:** Casting, Coerción, Conversión  
**Ramos:** Lenguajes de programación, Programación avanzada para ciencias  

## Descripción
Los conceptos de *coerción* y *conversión* se realcionan con la modificación de los tipos de datos en una expresión:
* **Conversión** (o *casting explícito*): Cuando el cambio del tipo de dato es *declarado de forma explícita*, esto se hace indicando el tipo de dato entre parentesis antes de la variable o expresión, por ejemplo: ```(int)0.5 + 1```.
  * 📝 Sintaxis válida para C también.
* **Coerción**: Es el cambio del tipo de dato que ocurre de forma *implícita*, es decir, no es declarado. Depende de los tipos de datos y operaciones involucradas en la expresión:
  * Una expresión que involucre dos tipos de datos distintos: ```1 + 0.1```
  * Una operación que requiere de ciertos tipos: ```'a' + 'b'```
  * 📝 Notar que es posible cuando existen tipos compatibles (el lenguaje define conversiones implícitas válidas).

## Código
📦 [Descargar código](code/main.cpp)
