## Descripción
Este proyecto implementa una estructura de datos de pila utilizando el lenguaje de programación C. La pila se basa en nodos, donde cada nodo contiene datos y un puntero al siguiente nodo en la pila. La implementación sigue el paradigma de programación imperativa.

## Estructura Utilizada
Pila: Una pila es una estructura de datos que sigue el principio de Last In, First Out (LIFO). Los elementos se agregan y se eliminan desde el mismo extremo, llamado la cima de la pila.

Nodo: Cada nodo en la pila contiene un puntero a los datos y un puntero al siguiente nodo.

## Lenguaje de Programación

Lenguaje: C
Paradigma: Programación Imperativa

## Requerimientos de Software

Para compilar y ejecutar este proyecto, se hace necesario tener instalado un compilador de C. Las herramientas y configuraciones necesarias son:

### Compilador de C:
    GCC (GNU Compiler Collection) o cualquier otro compilador de C compatible.
### Versión Recomendada:
    GCC 9.0 o superior
    En Windows:
    Se puede instalar MinGW (Minimalist GNU for Windows) desde la pagina oficial de MinGW o usar MSYS2.
## Cómo Ejecutar la Aplicación de Prueba

### 1. Clonar el Repositorio

Primero se hace necesario tener una copia local del repositorio.

### 2. Navegar al directorio del proyecto

Para llevar a cabo la compilación se debe acceder al directorio en donde se encuentren los archivos necesaarios para la compilacion(usando la consla):
En este caso:

    cd ./src

### 3. Compilar el Código

Utilizar el compilador GCC para compilar el código fuente. 

Es necesario asegurarse de que los archivos necesarios .c y .h estén en el mismo directorio y escoger un nombre para el compilado(En la consola):

ejemplo:
    
    gcc Node.c Stack.c main.c -o MyStack

### 4. Ejecutar la Aplicación

Una vez compilado, se puede ejecutar el programa(desde la consola):

ejemplo:

    ./MyStack

#### adicionalente:
asegurarse de tener todos los archivos necesarios para la compilación en el mismo directorio.