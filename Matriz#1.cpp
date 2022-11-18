//1.- Obtener la suma y promedio de una matriz. Pide el número de filas y columnas y visualice por pantalla la matriz
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

int main()
{
	 
	int a=0,b=0, aux;
	int i=0,j=0,k=0; 
	float promedio=0, suma=0;
	system ("color 4e" );
	printf("Dame el numero de filas\t");
	scanf("%d",&a);
	printf("Dame el numero de columnas\t");
	scanf("%d",&b);
	k=a*b;
	printf("\nEl numero de elementoes en el arreglo es de %d\n",k);
	
	int arreglo[a][b];
	for (i=0;i<a;i++)
    {
        for (j=0; j<b; j++)
        {
            printf("introdusca un valor [%d][%d]",i+1,j+1);
            scanf("%d", &arreglo[i][j]);
        }
    }
    
	//IMPRESION DE LA MATRIZ 
    printf("la matriz de es:\n\n");
    for (i=0; i<a; i++)
    {
      
        for (j=0; j<b; j++)
        {
        
            printf("\t%d", arreglo[i][j]);
          
            
        }
          printf("\n"); //brinca una linea para indicar la sig fila
    }
    suma=0;
    
	for(i=0; i<a; i++)
	{
		for (j=0; j<b; j++)
		{
			suma=suma+arreglo[i][j],j+1,i+1;
		}
		
	}
	printf("\nLa suma del arreglo es: %d\n",suma);
	promedio=suma/k;
	printf("\nEl promedio de el arreglo es de: %2f\n",promedio);
	
	
	getch();
}
