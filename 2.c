#include <stdio.h>
    int main()
    {
        int i;
        printf ("entre com um numero de 1 a 10");
        scanf ("%d",&i);
        do 
        {
            printf ("este numero esta incorreto");
            
        }
        while (i>10 || i<1);
        return 0;
        }
        