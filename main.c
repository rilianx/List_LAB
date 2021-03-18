#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heap.h"


int main( int argc, char *argv[] ){
    Heap* heap = createHeap();

    int i;
    char j[3];
    printf("Se ingresan elementos a la cola con prioridad\n");
    for(i=0;i<10;i++){
        int p=rand()%100;
        sprintf (j, "%d",p); //se convierte el número en string j
        heap_push(heap,strdup(j),p);  //se guarda el string con prioridad p
        printf("%s,",j);
    }
    printf("\n");

    printf("Se extraen elementos ordenados de la cola con prioridad\n");
    while(heap_top(heap)){
        printf("%s,", (char*) heap_top(heap));
        heap_pop(heap);
    }
    printf("\n");

    return 0;
}