#include <stdio.h>

int main(){
    int valor;

    printf("1: Oi\n2: Olá");
    printf("\n\n Digite um número:");scanf("%i", &valor);
    switch(valor){
        case 1: printf("Oi"); break;
        case 2: printf("Olá"); break;
    }
    return 0;
}