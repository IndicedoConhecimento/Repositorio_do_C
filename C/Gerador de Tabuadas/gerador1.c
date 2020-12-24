#include <stdio.h>

int main(){
  int c,tabuada;
  printf("Escreva o número da tabuada que você quer fazer: ");
  scanf("%i", &tabuada);
  if(tabuada > 100){
    printf("Não passamos do número 100\nNão aceitamos letras");
  }else{
    for(c = 1;c <= 10;c++){
      int res = tabuada*c;
      printf("%i X %i = %i \n", c,tabuada,res);
    }
  }
  return 0;
}
