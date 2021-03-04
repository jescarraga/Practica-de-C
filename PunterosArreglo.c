#include<stdio.h>
#include<stdlib.h>

int main(){

	int arr[10];
	int *p = malloc(10*(sizeof(int)));


	for (int i = 1; i <= 10; ++i)
	{
		arr[i-1]=i;
	}

	for(int i = 0; i < 10; i++){
        printf("%i \n",arr[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("%p \n",&arr[i]);
    }

	for (int i = 0; i < 10; ++i)
	{
		*(p+i)=i+1;
	}

	for(int i = 0; i < 10; i++){
        printf("%i \n",*(p+i));
    }


	//liberar memoria
	free(p);

	/*
	printf("el dato arr[0] es: %d \n",*p + 1 );
	printf("la direccion de arr[] es %p \n ",p);
	*/
}