#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *file;
	file = fopen("in.txt","r");
	if (file ==NULL)
	{
		printf("error leyendo archivo\n");
	}
	int numero1;
	int numero2;
	fscanf(file,"%d",&numero1);
	fscanf(file,"%d",&numero2);
	fclose(file);

	FILE *fileOut;
	fileOut = fopen("out.txt","w");
	//recordar verificar error
	fprintf(fileOut, "la suma de los numeros es:  %d \n", numero1 + numero2);
	fclose(fileOut);
}