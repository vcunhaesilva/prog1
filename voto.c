#include <stdio.h>

  int main()
{    
 int idade;
 printf ("Insira sua idade:");
 scanf ("%d",&idade);
    if (idade >=18 && idade <=70)
    {
    printf("Você é obrigado a votar!");
    }
    if (idade <16)
    {
    printf("Você não pode votar!");
    }
    if (idade ==16 || idade ==17 || idade >70)
    {
    printf("Você pode votar se quiser!");
    }
   
    
 
 return 0;
}