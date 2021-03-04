#include <stdio.h>


int main() {
    //PUNTEROS BASICOS
    int a = 2;
    // Creamos el apuntador apt que apt
    // lo apuntamos a al valor de la variable a
    int *apt = &a;
    // imprimimos el valor al que el apuntador apt apunta
    printf("%i \n",*apt);
    // imprimimosla dirección de memoria a la que apunta apt
    printf("%i \n",apt);
}