#include <stdio.h>
int main()
{
    int num1, num2;
    int soma;
    
    //entre com o primeiro numero
    printf("primeiro numero: "); 
    scanf("%d",&num1);
    //entre com o segundo numero
    printf("segundo numero: ");
    scanf("%d",&num2);
        
    soma = num1 + num2;
    
    //resultado da soma dos numeros inseridos
    printf("\n%d\n\n",soma);
  
   
    
    return 0;
}