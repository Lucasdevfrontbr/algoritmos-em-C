#include <stdio.h>

int main()
{
    int opcao;
    
    printf("escolha uma opcao \n");
    
    scanf("%d",&opcao);
    
  if(opcao==1){
      printf("voce escolheu a opcao 1");
  }else if(opcao==2){
      printf("voce escolheu a opcao 2");
  } else{
      printf("voce nao escolheu nenhuma opcao valida");
  }
  
    return 0;
}