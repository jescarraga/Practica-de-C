#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main(){
	char buf[11];
	int pipefd[2];
	int r;
	pid_t pid;
	r = pipe(pipefd);
	if(r < 0){
		printf("error pipe()");
		exit(-1);
	}
	pid = fork();
	if(pid < 0){
		perror("Error fork");
		exit(-1);
	}
	if(pid == 0){//Hijo
		//hijo escribe pip - pipefd[1]
		close(pipefd[0]);
		write(pipefd[1], "hola mundo", 10);
		//if(r != 10) perror("no escribio bieeeen");
		close(pipefd[1]);
		exit(0);
	}
	else{//Padre
		//padre lee pipe - pipefd[0]
		close(pipefd[1]);
		r = read(pipefd[0], buf, 10);
		buf[r] = 0;
		close(pipefd[0]);
		printf("\nMensaje del hijo: %s \n", buf);
	}
	return 0;

}
