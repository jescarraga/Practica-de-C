#include <stdio.h>

void saludo(){
    printf("Hola mundo \n");
}

void imprimir_cadena(char a[]){
    
    int tam = sizeof(a)/sizeof(a[0]);
    
    for(int i = 0; i < tam; i++ ){
        printf("%c",a[i]);
    }
}

int main() {
    saludo();
    char a[] = "hola 2";
    imprimir_cadena(a);
}