#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>

int main(){
	system ("color 4e");
    int i,c,f,j,num,b,max,min,max1, min1,e,h;
    int a = 1;
    b = 0;
    i = 0;
    h = 1;
    e = 1;
    
    printf("De cuantas filas quieres tu arreglo \n>");
    scanf("%d",&f);
    printf("De cuantas columnas quieres tu arreglo \n>");
    scanf("%d",&c);
    int mat[f][c];
    system("cls");
    
    printf("Ingresa el 1 valor: ");
    scanf("%d", &mat[0][0]);
    max = mat[0][0];
	min = mat[0][0];
    
    for(j = 0; j < f; j++)
        {
        	if(j == 0)
        		i = 1;
        	else 
        		i = 0;
            for (i ; i < c; i++)
                {
                		printf("Ingresa el %d valor: ", a+1);
	                    scanf("%d",&mat[j][i]);
	                    a++;
	                    if(mat[j][i] > max)
	                    	max = mat[j][i];
	                    	
	                    if(mat[j][i] < min)
	                    	min = mat[j][i];
					
                }
        }
        
    for(j = 0; j < f; j++)
	{
		for(i = 0; i < c; i++)
		{
			printf("%d ", mat[j][i]);
		}
		printf("\n");
	}    
	
	getch();
    do{    
    
    printf("Selecciona el numero de una fila (Que exista)\n>");
    scanf("%d", &num);
    num = num - 1;
        if( num >= 0 && num <= (f - 1))
        {
            b = 1;
        } 
        
    }while ( b == 0);
   
	max1 = mat[num][0];
	min1 = mat[num][0];
    for(i = 1; i < c; i++)
    {
    	if(mat[num][i] > max1)
    	{
	       	max1 = mat[num][i];
	       	e = i + 1;
	 	}
	    if(mat[num][i] < min1)
	    {
	        min1 = mat[num][i];
	        h = i + 1;
		}
	}
   
    
    printf("\n\nEl numero mayor de la fila que seleccionaste es: %d y se encuentra en la posicion [%d][%d]", max1,(num + 1),e);
    printf("\nEl numero menor de la fila que seleccionaste es: %d y se encuentra en la posicion [%d][%d]", min1,(num + 1), h);
    getch();
}
