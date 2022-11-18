#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main()
{
    int arreglo[4][4],i,j;
    for (i=0;i<4;i++)
    {
        for (j=0; j<4; j++)
        {
            printf("introdusca un valor [%d][%d]",i+1,j+1);
            scanf("%d", &arreglo[i][j]);
        }
    }
    //IMPRESION DE LA MATRIZ 
    printf("la matriz de 4*4 es:\n\n");
    for (i=0; i<4; i++)
    {
      
        for (j=0; j<4; j++)
        {
            printf("\t%d",arreglo[i][j]);
           
             
            
        }
          printf("\n"); //brinca una linea para indicar la sig fila
    }
    
    
getch();
}
    
    

        
    
    
