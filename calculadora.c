#include <stdio.h>
    int main()
    {
        int num1,num2,opcao,res2;
        float res;
        do
        {
        
            printf("insira o primeiro numero:");
            scanf("%d",&num1);
            printf("insira o segundo numero:");
            scanf("%d",&num2);
            printf("Qual operação deseja?\n\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - divisão\n");
            scanf("%d",&opcao);
            if(opcao == 1)
            {
                res=num1+num2;
                printf("%d + %d = %.2f",num1,num2,res);
            }
            else if(opcao == 2)
            {
                
                res=num1-num2;
                printf("%d - %d = %.2f",num1,num2,res);
            }
            else if(opcao == 3)
            {
                res=num1*num2;
                printf("%d X %d = %.2f",num1,num2,res);
            }
            else if(opcao == 4)
            {
               
                res=num1/num2;
                printf("%d / %d = %.2f",num1,num2,res);
            }
            printf("deseja continuar?(1-s//2-n)");
            scanf("%d",&res2);
        }
            while(res2==1);
            
            return 0;
    }