
Implementando una Lista
=====


---
**Antes de comenzar**

* Abra el Visual Studio Code y abra una nueva ventana
* En el explorador ponga la opción para clonar repositorio y clone **este repositorio**
* Sólo puede modificar los archivos `list.c` y `main.c`
* Para testear sus códigos debe abrir un terminal *git bash* y ejecutar el comando `./test.sh`
* Verifique que sus cambios se hayan subido al repositorio en github
* No está permitido usar comandos de git (a menos que el profesor lo indique)

---



En este laboratorio implementaremos una **lista**. Para ello usaremos la siguiente estructura (lista enlazada doble):

````c
typedef struct Node Node;

struct Node {
    void * data; // Puntero al dato
    Node * next; // Puntero al siguiente nodo
    Node * prev; // Puntero al nodo previo
};

typedef struct {
    Node * head; // Puntero al primer elemento
    Node * tail; // Puntero al ultimo elemento
    Node * current; // Puntero para poder recorrer la lista
} List;
````

Si tiene dudas o no sabe como funciona una lista enlazada, puede ver [esta presentación](https://docs.google.com/presentation/d/1ywdRlclnyEt5j02rHXF1nC_3oF0RJcuz2U12qPuv5N4/edit), revisar [este libro](https://drive.google.com/file/d/0B9JSHx01XN1rRGwyTHowaEJnLUE/view?usp=sharing), buscar en internet o preguntar.

Ejercicios
----

1. Programe la función `List* createList()`, la cual retorna el puntero del tipo de dato `List` con sus valores inicializados en NULL.
> Recuerda reservar memoria al puntero usando malloc o calloc.

2. Programe las funciones `void * firstList(List * list)` y `void * nextList(List * list)`. 
   * La primera retorna el dato del primer nodo de la lista (`head`) y actualiza el current para que apunte a ese nodo. 
   * La segunda función retorna el dato del nodo a continuación del current y actualiza el current para que apunte a ese nodo.

3. Programe las funciones `void * lastList(List * list)` y `void * prevList(List * list)`.
   * La primera retorna el dato del último elemento en la lista y actualiza el current al nodo correspondiente. 
   * La segunda función retorna el dato del nodo anterior a current y actualiza el current para que apunte a ese nodo.

4. Programe la función `void pushFront(List * list, void * data)`, la cual agrega un dato al comienzo de la lista. 
> Puede utilizar la función `Node* createNode(void * data)` la cual crea, incializa y retorna un nodo con el dato correspondiente. 

5. Programe la función `void pushCurrent(List * list, void* data)`, la cual agrega un dato a continuación del nodo apuntado por `list->current`.

6. Programe la función `void* popCurrent(List * list)`, la cual elimina el nodo que está en la posición del current de la lista enlazada, y además retorna el **dato** del nodo eliminado.
> **Nota**: El current debe quedar apuntando al nodo siguiente del eliminado.

Las funciones `pushBack`, `popFront` y `popBack` se pueden implementar usando `popCurrent` y `pushCurrent` (búsquelas en el código).

### Por lo tanto, ya tiene implementado su primer TDA!

----

### Pruebe su implementación

Revise el ejemplo en el archivo `main.c`.

Luego para compilar y ejecutar:

    gcc main.c list.c -o main
    ./main 


