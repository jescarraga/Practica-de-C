#include <stdio.h>

long factorial(int n){
    if(n == 1){
        return 1;
    }else{
        return ( n*factorial(n-1));
    }
}


int main() {
    printf("%li \n",factorial(1));
    printf("%li \n",factorial(3));
    printf("%li \n",factorial(2));
}