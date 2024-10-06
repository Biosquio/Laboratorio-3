Claro, aquí te dejo el contenido adaptado en formato **Markdown** para que lo puedas utilizar en GitHub como archivo `README.md`:

```markdown
# Laboratorio 3 - Programación Bajo Plataformas Abiertas (IE-0117)

## Descripción

Este repositorio contiene las soluciones al **Laboratorio 3** del curso _Programación Bajo Plataformas Abiertas (IE-0117)_ de la **Universidad de Costa Rica**. En este laboratorio, se resuelven tres problemas en lenguaje C, abordando temas de manipulación de matrices, cálculos matemáticos y búsqueda de patrones. Se promueve el uso de buenas prácticas de programación, como la documentación adecuada, código limpio y el uso de control de versiones con GitHub.

---

## Contenidos

- **Ejercicio 1: Suma de diagonales de una matriz cuadrada**
  - Este programa calcula la suma de los elementos en las diagonales principal y secundaria de una matriz cuadrada de tamaño variable.
  
- **Ejercicio 2: Cálculo del factorial de un número**
  - Se corrige un código que calculaba el factorial de un número. El programa modificado permite al usuario ingresar el número y calcula el factorial de forma correcta.

- **Ejercicio 3: Secuencia más larga de 1s en una matriz binaria**
  - Este programa encuentra la secuencia más larga de 1s consecutivos en una matriz binaria cuadrada. El programa también puede generar matrices aleatorias usando la función `rand()`.

---

## Ejecución

Para ejecutar cualquiera de los ejercicios, sigue estos pasos:

1. **Compilación**:
   - Compila el archivo del ejercicio con `gcc` para asegurarte de que no haya errores ni advertencias.
   
   Ejemplo para el **Ejercicio 1**:
   ```bash
   gcc -Wall ejercicio1.c -o ej1
   ```

2. **Ejecución**:
   - Ejecuta el programa compilado:
   
   ```bash
   ./ej1
   ```

3. **Modificación**:
   - Puedes cambiar el tamaño de la matriz o los valores iniciales para probar diferentes casos en el código fuente.

---

## Resultados

1. **Ejercicio 1: Suma de las diagonales de una matriz cuadrada**:
   - El programa fue probado con diferentes matrices de tamaños variables, y calculó correctamente la suma de las diagonales principal y secundaria.
   
   Ejemplo de resultados:
   - Para la matriz:
     ```c
     {1, 2, 3}
     {4, 5, 6}
     {7, 8, 9}
     ```
   - Suma de la diagonal principal: 1 + 5 + 9 = 15
   - Suma de la diagonal secundaria: 3 + 5 + 7 = 15
   - Suma total: 30

2. **Ejercicio 2: Cálculo del factorial de un número**:
   - El código corregido calculó correctamente el factorial de un número ingresado por el usuario. Se añadió validación para evitar errores lógicos.
   
   Ejemplo:
   - Para el número ingresado `5`, el factorial es: `5! = 120`.

3. **Ejercicio 3: Secuencia más larga de 1s en una matriz binaria**:
   - El programa encontró correctamente la secuencia más larga de 1s consecutivos en matrices binarias generadas aleatoriamente.
   
   Ejemplo de una matriz generada:
   ```c
   {1, 0, 1, 0, 1}
   {0, 1, 1, 1, 0}
   {0, 0, 1, 1, 1}
   {1, 1, 1, 0, 0}
   {1, 0, 0, 1, 1}
   ```
   - La secuencia más larga de 1s fue: 5

---

## Recomendaciones

- **Validación de entrada**: En el **Ejercicio 2**, se recomienda implementar validaciones para evitar entradas de números negativos en el cálculo del factorial.
- **Modularización**: Dividir el cálculo de las diagonales en funciones separadas para mejorar la organización del código.
- **Matrices dinámicas**: Se recomienda implementar el manejo de matrices de tamaño dinámico utilizando `malloc` y `free`, lo que permitiría una mayor flexibilidad al trabajar con matrices de distintos tamaños.

---

## Conclusiones

- El laboratorio permitió reforzar conocimientos sobre el uso de matrices bidimensionales, la implementación de algoritmos básicos y la depuración de código.
- Se logró implementar correctamente los algoritmos solicitados y los programas funcionaron sin errores ni advertencias.
- El uso de GitHub y la implementación de buenas prácticas de programación fomentaron un desarrollo limpio y escalable, lo que es esencial en proyectos colaborativos y en el mundo real del desarrollo de software.

---

## Instrucciones adicionales

Cada ejercicio tiene su propio branch dentro del repositorio. Para acceder al código de cada uno de los ejercicios, utiliza el siguiente comando para cambiarte al branch correspondiente:

```bash
git checkout ejercicio1
```
```

### Notas:
- Markdown es un lenguaje de marcado ligero, por lo que este archivo `README.md` se mostrará correctamente en GitHub.
- Asegúrate de seguir la estructura para que la descripción, los pasos de ejecución y los resultados sean claros para cualquier usuario que consulte tu repositorio.

Si tienes alguna otra duda o necesitas personalizar algo más, ¡avísame!
