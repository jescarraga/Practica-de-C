#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int cronometro;
	printf("ingrese un numero para comenzar la cuenta regrasiva : ");
	scanf("%d",&cronometro);
	printf("\n");

	while(cronometro != 0){
		printf("ingrese el numero 0 no este: %d \n",cronometro);
		scanf("%d",&cronometro);
	}

	double contador;
	printf("ingrese un numero para comenzar el condicional: ");
	scanf("%lf",&contador);

	if(contador > 30.1){
		printf("el condicional sirve\n");
	}else{
		printf("\n");
	}

	do
	{
		contador++;
		printf("%f \n",contador );
	} while (contador < 50);

	
	int i,j,k,n;
        n=10; //Modifica este parámetro si quieres
        for(i=1; i<n+(n/2); i++){
            for(j=n+(n/2); j>i; j--){
                printf(" ");}
            for(k=1; k<=2*i-1; k++){
                printf("*");}
                printf("\n");
        }
        for(i=1; i<n-(n/2); i++){
            for(j=n+(n/2); j>1; j--){
                printf(" ");}
            for(k=n/2; k<=(n/2)+1; k++){
                printf("*");}
                printf("\n");
        } 
	return 0;
}