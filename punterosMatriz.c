#include<stdio.h>
#include<stdlib.h>

//corregir la forma 2

int main(){

	int rows =3;
	int cols =3;

	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

	int *p = malloc(9*sizeof(int));

	for (int i = 0; i < 9; ++i)
	{
		*(p+i)=i+1;
	}

	//Primera fomra
	int x=1;
	int y =1;

	printf("p [1][1] %d \n",*(p+cols*x+y));
	

	//Segunda forma
	int *(*p2) = malloc(3*sizeof(int*));
	for (int i = 0; i < 3; i++)
	{
		*(p2+i) = malloc(3*sizeof(int));
	}

	int num = 0;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{	
			num++;
			*(*(p2 + i) + j)= num;
		}
	}

	printf("elemento x y %d \n",*(*(p2 + x) + y));

	free(p);
}