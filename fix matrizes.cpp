#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>

int main()
{
	int a=0,b=0;
	int i=0,j=0;
	printf("Dame el numero de filas\t");
	scanf("%d",&a);
	printf("Dame el numero de columnas\t");
	scanf("%d",&b);
	int arreglo[a][b];
	for (i=0;i<a;i++)
    {
        for (j=0; j<b; j++)
        {
            printf("introdusca un valor [%d][%d]",i+1,j+1);
            scanf("%d", &arreglo[a][b]);
        }
    }
	//IMPRESION DE LA MATRIZ 
    printf("la matriz de es:\n\n");
    for (i=0; i<a; i++)
    {
      
        for (j=0; j<b; j++)
        {
        
            printf("\t%d",arreglo[a][b]);
          
            
        }
          printf("\n"); //brinca una linea para indicar la sig fila
    }
	
	getch();
}
