#include <stdio.h>
// #include "nombre del archivo"

//macro
#define CUBO(a) a*a*a

//constante
#define PI 3.1416

int main(int argc, char const *argv[])
{
	//double suma = PI + 3;
	long int n ;
	scanf("%li",&n);
	printf("%li \n",n);
	printf("Cubo de n es %li \n",CUBO(n));
	return 0;
}