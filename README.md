# Repositorio de ejemplos

La finalidad de este repositorio es poder ordenar y dejar a disposición ejemplos de diferentes asignaturas para poder ser revisados y utilizados para complementar el estudio.

Acceso a los ejemplos: [📖](https://wormaza.github.io/ejemplos-utiles/)

> * ⚠️: **NO** reemplaza el material oficial de las asignaturas.
> * ⚠️ **NO** necesariamente cubre todos los contenidos
> * 📧: Dudas/consultas/comentarios a [wladimir.ormazabal@usm.cl](mailto:wladimir.ormazabal@usm.cl)


## Estructura del repositorio

El repositorio tiene la siguiente estructura:

```
ejemplos-utiles/
├── _config.yml
├── index.md
├── _data/
│   └── examples.yml
├── pages/
│   └── conceptos.md
│   └── languajes.md
│   └── cursos.md
└── ejemplos/
    └── main-concepto/
        └── ejemplo/
            ├── index.md
            └── code/
                └── codigo.zip
```

📑Dentro del directorio "**ejemplos**" se van agrupando los ejemplos a trabajar. Cada ejemplo tiene una ficha con la siguiente estructura:

```
---
title: Nombre para identificarlo
---

# Título del ejemplo

**Lenguaje:** lenguaje utilizado  
**Concepto:** principales conceptos associados  
**Ramos:** ramos/asignaturas en los que es relvante  

## Descripción
Breve descripcion, si es necesaria.

## Código
📦 [Descargar código](code/archivo para descargar - puede ser un zip -)
```

⚠️ Para la indexación del ejemplo **se debe modificar SOLAMENTE** el archivo **examplos.yml** incluyendo los datos del ejemplo agregado:

```
- id: identificador
  title: "titulo del ejemplo"
  path: "ejemplos/main-concepto/directorio-del-ejemplo"
  language: ["lenguaje"]
  concepts: ["concepto 1", "concepto 2"]
  courses: ["Ramo 1", "Ramo 2"]
  level: "nivel de dificultad estimado"
```

📑 Tener cuidado con la ruta del directorio, y se debe incluir al hacer al subir los cambios.

## Trabajo pendiente

Incluir validación de los archivos de configuración.

## Referencias:

* [Github pages](https://docs.github.com/es/pages)
* [Liquid](https://shopify.dev/docs/api/liquid)
* [Jekyll](https://jekyllrb.com/docs/)