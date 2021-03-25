#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

#define tamBuffNum 8 

int main(){

	
	//buffer 
	char buf[tamBuffNum];
	// 1 tuberia y una flag   
	int pipefd[2];
	int r;
	pid_t pid;

	//inicio tuberia y compruebo que este bien 
	r = pipe(pipefd);
	if(r < 0){
		printf("error pipe()");
		exit(-1);        
	}
    
	//inicio fork y comprobar si esta bien
	pid = fork();
	if(pid < 0){
		perror("Error fork");
		exit(-1);
	}
    
	
	if(pid == 0){//Hijo

		//hijo calcula los numeros a sumar 
		double positivos = 0;
		double k =2;

		for (int i = 1; i <= 100000; i++){			
		double h = (4/(k*(k+1)*(k+2)));		
		positivos = positivos + h ;		
		k = k+4;
		}

		//buf[tamBuffNum];
		gcvt(positivos, 7, buf);
	
		
		//hijo escribe pip - pipefd[1]		
		close(pipefd[0]);
		write(pipefd[1], buf, 7);
		//if(r != 7) perror("no escribio bieeeen");
		close(pipefd[1]);
		exit(0);
		
	}

	else{//Padre

		double negativos = 0;
		double j = 4;

		for (int i = 1; i <= 100000; i++)
		{				
		double h = (4/(j*(j+1)*(j+2)));		
		negativos = negativos + h ;		
		j = j+4;
		}

				
		//padre lee pipe - pipefd[0]
		close(pipefd[1]);
		r = read(pipefd[0], buf, 7);
		buf[r] = 0;
		close(pipefd[0]);
		
		char *ptr;
   		double pos;

   		pos = strtod(buf, &ptr); 

		double pi = 3 +(pos - negativos);
		printf(" --------------------- \n");
		printf("Resultado pi %20.20f\n",pi);
		printf(" --------------------- \n")
		
	}
	
	return 0;

}
