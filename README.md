# Implementacion de conjunto numérico en C

Este programa implementa un conjunto de números enteros en C utilizando un arreglo binario. Permite insertar, eliminar, verificar existencia y mostrar todos los elementos en el conjunto. El rango permitido va de 0 a 1000.

## Estructura del conjunto

Se define una estructura `Conjunto` con un arreglo de tamaño fijo (`MAX_NUM + 1`) donde cada índice representa un número, y su valor indica si está presente (`1`) o ausente (`0`) en el conjunto.

## Funcionalidades

- **`init`**: Inicializa el conjunto como vacío.
- **`insertar`**: Agrega un número al conjunto si está dentro del rango permitido.
- **`eliminar`**: Elimina un número del conjunto si está dentro del rango permitido.
- **`existe`**: Verifica si un número está presente en el conjunto.
- **`mostrar`**: Imprime todos los elementos presentes en el conjunto.

## Menú
Al ejecutar el programa se le mostrara el menú con las siguientes funcionalidades

1. Insertar número  
2. Eliminar número  
3. Consultar existencia  
4. Mostrar conjunto  
5. Salir

## Compilación y ejecución

```bash
gcc conjunto.c -o conjunto
./conjunto
