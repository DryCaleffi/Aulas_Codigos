#include <stdio.h>

int main(void) 
{
  char nomecliente[15],produto[50];
  float valoruni , valorpagar,quantidade;
  

  printf("Informe o nome do cliente ");
  scanf("%s" , &nomecliente);
  printf(" Nome do produto ");
  scanf("%s" , &produto);
  printf(" qual o valor do produto ? ");
  scanf("%f" ,&valoruni);
  printf("Qual foi a quantidade adquirida desse produto ? ");
  scanf("%f" ,&quantidade);
  valorpagar= valoruni*quantidade; 
  printf("\n Valor á pagar , %.2f " , valorpagar);


    if ( valorpagar > 300 )
  {
   printf( "\n Volte Sempre !!!");

    }else{

    printf("\nVocê poderia ter aproveitado melhor nossos produtos");
    }
  
  return 0;
}