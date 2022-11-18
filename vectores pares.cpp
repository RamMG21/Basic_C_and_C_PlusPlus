#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main()
{
    int vec1[10],i;
    int x=0;
    
    for(i=0; i<10; i++)
    {
        
        printf("Dame un numero %d\t\t", i+1);
        scanf("%d", &vec1[i]);
        
       
    }
     for(i=0; i<10; i++)
     {
       printf("%d\t",vec1[i]);
     }
       
       
        printf("\nDame otro numeros mas\n");
    
        scanf("%d",&x);
        for(i=0; i<10; i++)
        {
        if (x==vec1[i])
        printf(" El esta entre los anteriores %d",vec1[i]);
        else
        printf("\nno esta entre los vec");
    }    


getch();
}
        

    
