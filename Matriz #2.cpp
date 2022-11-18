//2.- Escribir un programa que lea una matriz de 3 filas y 3 columnas de valores enteros. Visualice por pantalla la matriz. 
  //  A continuación, el programa debe pedir el número de una fila. El programa debe devolver el máximo número de esa fila
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
int main()
{
	system("color 4e");
	int arreglo[3][3],i,j;
	int fila=0, cont=0;
	int mayor=0,max=0,num,f,b,a;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Dame el valor en la poscision [%d][%d]:\t",i+1,j+1);
			scanf("%d",&arreglo[i][j]);
			
		}
	}
	printf("\nTu matriz es:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",arreglo[i][j]);
		}
		printf("\n");
	}
	
	
		printf("Dame un valor para seleccionar una fila y decir el valor maximo de la misma: ");
    scanf("%d",&a);
    b=a-1;
    if(b<=2){
    	for(i=0;i<3;i++){
    		if(arreglo[b][i]>max){
    			max=arreglo[b][i];}
			}
				
				printf("\nEl valor maximo de la fila %d es %d",a,max);
		}
		else{
	printf("Esa fila no existe");}
    
	







	getch();
}
