#include <stdio.h>
#include <math.h>
 
int main() 
{
     int n1,n2; 
     int soma,subtracao,multiplicacao;
     float divisao;
      
     printf ("\nDigite um numero:");
     scanf ("%d", &n1);
     printf ("\nDigite outro numero:");
     scanf ("%d", &n2);
     soma = n1 + n2;
     subtracao = n1 - n2;
     multiplicacao = n1 * n2;
     divisao =(float) n1 / n2;
      
     printf ("\nsoma de %d + %d = %d\n\n",n1 ,n2 ,soma);
     printf ("\nsubtracao de %d - %d = %d\n\n",n1 ,n2 ,subtracao);
     printf ("\ndivisao de %d / %d = %f\n\n",n1 ,n2 ,divisao);
     printf ("\nmultiplicacao de %d * %d = %d\n\n",n1 ,n2 ,multiplicacao);
     
     return 0;
     
     
    
     }