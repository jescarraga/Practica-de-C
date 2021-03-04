#include <stdio.h>

int main() {
    int arreglo[4] = {1,2,3,4};
    
    //imprimir elementos del arreglo
    for(int i = 0; i < 4; i++){
        printf("%i \n",arreglo[i]);
    }
    //imprimir dirección del arreglo
    printf("%p \n",arreglo);
    
    //imprimir tamñaño del arreglo
    int tama = sizeof(arreglo)/sizeof(arreglo[0]);
    printf("%i",tama);
}