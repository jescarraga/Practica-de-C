#include <stdio.h>

int main(int argc, char const *argv[])
{

	char c = 'y';
	printf("%li \n",sizeof(c));

	int a = 80;
	printf("%li \n",sizeof(a));

	short e = -1;
	printf("%li \n",sizeof(e));

	unsigned int u = 25;
	printf("%li \n",sizeof(u));

	long l = 6058;
	printf("%li \n",sizeof(l));

	float f = 72538;
	printf("%li \n",sizeof(f));

	double d = 12598.365478;
	printf("%li \n",sizeof(d));


	printf(" Entero %i \n flotante %.2f \n double %.3f \n caracter %c \n",a, (float)a, (double)a, (char)a );


	return 0;
}