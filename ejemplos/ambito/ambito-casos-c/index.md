---
title: Impacto definición del ámbito en C/C++
---

# Impacto definición del ámbito en C/C++

**Lenguaje:** C/C++  
**Concepto:** Ámbito, Memoria estática, Memoria stack, Memoria
**Ramos:** Lenguajes de programación, Programación avanzada para ciencias  

## Descripción
* Un *ámbito* corresponde a una parte de nuestro código. En la práctica lo podemos identificar cuando encontramos:
  * Una función
  * Una estructura de control (por ejemplo: ```if```, ```for```, ```while```,...)
  * El uso de ```{``` (inicio) y ```}``` (termino).
* Esta *parte de nuestrp código* (**ámbito**) tiene efectos muy importantes, que se relacionan con la *existencia* y *visibilidad* de los elementos con los que trabajamos:
  * En el caso de variables de *estáticas* define su visibilidad (NO su existencia), por eso que su valor se mantiene tras múltiples llamadas a alguna función que se utilice.
  * En el caso de las variables de *dinámicas stack* su ciclo de vida esta ligado a su ámbito, por eso que su valor se "reinicia" (en realidad se crea y destruye) por cada llamada.


## Código
📦 [Descargar código](code/main.cpp)
