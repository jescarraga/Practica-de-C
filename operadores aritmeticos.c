#include <stdio.h>

// Los operadores atimeticos y su piroridad funcionan igual que en JAVA

int main(){

	int num1;
	int num2;
	int resultado;

	printf("ingrese el primer número\n");
	scanf("%d",&num1);

	printf("ingrese el segundo número\n");
	scanf("%d",&num2);

	resultado = num1 % num2;

	printf( "El resultado de la divicion es: %d \n", resultado);

	return 0;
}