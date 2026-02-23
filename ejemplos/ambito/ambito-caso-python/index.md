---
title: Impacto definición del ámbito en Python
---

# Impacto definición del ámbito en Python

**Lenguaje:** Python  
**Concepto:** Ámbito
**Ramos:** Programación avanzada para ciencias  

## Descripción
* Un *ámbito* corresponde a una parte de nuestro código. En este ejemplo, el uso de identación nos permite poder identificarlos.
* Pueden existir relaciones jerarquicas entre *ámbitos*, es decir, un *ámbito* puede contener otros, cada uno puede definir sus propias variables - incluso con los mismos nombres -. Es importante notar que para poder resolver algunas expresiones,**no es posible hacerlo solo examinando el ámbito local, por lo que es posible examinar un ámbito superior**, pero **NO** en sentido contrario.  En el caso del ejemplo se define *globalmente* las variables `a` y `b`. Esta definición tiene efectos en cada una de las funciones definidas:
  * En el caso de **`funcion1`**: Al no existir las variables `a` y `b` en el ámbito de la función, para poder resolver la expresión, se busca en el ámbito superior, donde en este caso se encuentra las definiciones globales, siendo posible resolver la expresión. 
  * En el caso de **`funcion2`**: ⚠️ En este caso ocurre un error, dado que se trata de utilizar variables antes se ser declaradas. **Notar que se inspecciona el ámbito local, dado que existen `a` y `b` locales, se utilizaran estas, pero al no estar declaradas al momento de la expresión es que ocurrirá el error**.
  * En el caso de **`funcion3`**: En este caso se define explíctamente por medio del uso de `global` la utilización de las  variables globales `a` y `b`, para luego ser modificadas. Esto permite eliminar los problemas de la `funcion2` y lo diferencia de lo que ocurre en la `funcion4`.
  * En el caso de **`funcion4`**: se definene **otras** variables, que si bien, tienen los mismos nombres (`a` y `b`), son completamente diferentes, ya que vivien en su propio ámbito.


## Código
📦 [Descargar código](code/ejemplo.py)
