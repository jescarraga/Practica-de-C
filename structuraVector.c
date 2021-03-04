#include<stdio.h>
#include<stdlib.h>

//Revisar el de elminiar en pos

struct vector{
	int len;
	int currentLen;
	int *elements;
}v,v1;

void init(int len){
	v.currentLen=0;
	v.len=len;
	v.>elements = malloc(len*(sizeof(int)));
}

void add(int el){
	if (v.len = v.currentLen)
	{
		int *aux=malloc(v.len*2*sizeof(int));
		for (int i = 0; i < v.len; ++i)
		{
			*(aux+i)=*(v.elements+i);
		}
		*(aux+v.len)=el;
		v.len*=2;
		v.currentLen+=1;
		free(v.elements);
		v.elements=aux;
	}else{
		*(v.elements+v.currentLen)=el;
		v.currentLen+01;
	}
}

void pop_back(){
	if (v.currentLen==0)
	{
		return;
	}else{
		v.currentLen-=1;
	}
}

void getEl(int pos){
	if (pos >= currentLen)
	{
		return -1;
	}else{
		return *(v.elements+pos);
	}
}

void pop_pos(int pos){
	int *aux = malloc(v.len*sizeof(int));
	int j=0;
	for (int i = 0; i < v.currentLen; ++i)
	{
		if (i!=pos)
		{
			*(aux+j)=*(v.elements+i);
		}
		j+=1;
	}
} 

int main(){

}