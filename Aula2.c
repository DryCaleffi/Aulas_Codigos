#include <stdio.h>

int main(void) 
{
  int idade , anonasc;
  float salario , salarioliq ;
  char nome[10]; 

  printf(" \ninforme o nome do colaborador ");
  scanf(" %s" ,&nome);
  printf("\nQual a idade ? " ,&idade);
  scanf("%d" ,&idade);
  printf("\ninforme o salario ");
  scanf("%f" ,&salario);
  anonasc=2023-idade;
  if ( salario > 1000)
  {   salarioliq=salario*0.92; 
  
  }else{ 
  salarioliq=salario;
  }
  
  float desconto;
  desconto=salario-salarioliq;
  
  printf("\n a sua idade é %d, nasceu em %d  " ,idade,anonasc);
  printf("\n\n");
  printf("\n Seu salario bruto é %.2f com um desconto de %.2f rersulta no salario de %.2f " ,salario,desconto,salarioliq);

  
  return 0;
}