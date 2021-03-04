#include <stdio.h>

int main() {
    int casos;
    printf("ingresa un 1 o un 2: \n");
    scanf("%d",&casos);
    switch(casos){
      case 1:
             printf("elegiste el primer caso");
             break;
      case 2:
             printf("elegiste el caso 2");
             break;
    }
}
