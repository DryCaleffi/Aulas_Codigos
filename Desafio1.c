#include <stdio.h>

int main(void) {
  int qtd;
   printf(" \n informe o tamanho do vetor   ");
    scanf("%d" , &qtd);
 int num , i , vetor[qtd] , pesq;

  for (i = qtd/2 ; i < qtd; i++ )
    {
      printf(" Informe numeros inteiros %d " , i );
      scanf("%d" ,&vetor[i]);
    }
  for (i =0 ; i < qtd/2; i++ )
    {
      printf(" Informe numeros inteiros %d " , i);
      scanf("%d" ,&vetor[i]);
    }
  for (i =0 ; i < qtd ; i ++)
    {
      printf(" %d " , vetor[i]);
    }
  printf("\n informe um numero inteiro que deseja pesquisar ");
  scanf(" %d" , &pesq);

  
  
  return 0;
}