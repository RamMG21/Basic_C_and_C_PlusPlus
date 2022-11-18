#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	system("color F0");
	int i,c,a,b,d,j,op,x,f,e,cont,num,aux,g;
    a,b,d=0;
    do
	{
	    do
	    {
	    	system("cls");
		    printf("Menú");
		    printf("\n\t1. Multiplicar una matriz por un número.");
		    printf("\n\t2. Sumar dos matrices cuadradas.");
		    printf("\n\t3. Ordenar un vector de mayor a menor.");
		    printf("\n\t4. Ordenar una matriz de menor a mayor.");
		    printf("\n\t5. Creación de una matriz identidad.");
		    printf("\n\t6. Salir.");
		    printf("\n\n¿Qué opción deseas usar?\n>");
		    scanf("%d",&op);
		}while(op < 1 || op > 6);
		
		switch(op)
		{
			case 1:
			{
				system("cls");
				cont = 1;
			    printf("¿Cuántas filas deseas ingresar? \n>");
			    scanf("%d",&f);
			    printf("¿Cuántas columnas deseas ingresar? \n>");
			    scanf("%d",&e);
			    int mat[f][e];
				system("cls");
				for(j = 0; j < f; j++)
				{
					for(i = 0; i < e; i++)
					{
						printf("Ingresa el %d valor:  ",cont);
						scanf("%d",&mat[j][i]);
						cont++;
					}	
				}	
				system("cls");
				printf("¿Cuál numero multiplicará a todos tus valores?\n>");
				scanf("%d",&num);
				system("cls");
				printf("Tus valores originales son:\n");
				for(j = 0; j < f; j++)
				{
					for(i = 0; i < e; i++)
					{
						printf("%d ",mat[j][i]);
					}
					printf("\n");
				}
				printf("\n\nTus valores multiplicados son:\n");
				for(j = 0; j < f; j++)
				{
					for(i = 0; i < e; i++)
					{
						mat[j][i] = mat[j][i] * num;
						printf("%d ",mat[j][i]);
					}
					printf("\n");
				}
				printf("\n¿Deseas regresar al menú? <Si = 1 / No = 0>\n>");
					scanf("%d",&x);
				} break;

			case 2:
			{
				system("cls");
				cont = 1;
			    printf("¿Cuántas filas y columnas deseas ingresar? (Tu matriz sera cuadrada))\n>");
			    scanf("%d",&f);
			    int mat1[f][f];
			    int mat2[f][f];
				system("cls");
				printf("Ingresa valores de la 1era Matriz\n\n");
				for(j = 0; j < f; j++)
				{
					for(i = 0; i < f; i++)
					{
						printf("Ingresa el %d valor:  ",cont);
						scanf("%d",&mat1[j][i]);
						cont++;
					}	
				}
				system("cls");
				cont = 1;
				printf("Ingresa valores de la 2da Matriz\n\n");
				for(j = 0; j < f; j++)
				{
					for(i = 0; i < f; i++)
					{
						printf("Ingresa el %d valor:  ",cont);
						scanf("%d",&mat2[j][i]);
						cont++;
					}	
				}
				printf("\n\nTus valores originales de la 1era Matriz son:\n");
				for(j = 0; j < f; j++)
				{
					for(i = 0; i < f; i++)
					{
						printf("%d ",mat1[j][i]);
					}
					printf("\n");
				}
				printf("\n\nTus valores originales de la 2da Matriz son:\n");
				for(j = 0; j < f; j++)
				{
					for(i = 0; i < f; i++)
					{
						printf("%d ",mat2[j][i]);
					}
					printf("\n");
				}
				
				printf("\n\nTus valores sumados de las Matrices son:\n");
				for(j = 0; j < f; j++)
				{
					for(i = 0; i < f; i++)
					{
						aux = mat1[j][i] + mat2[j][i];
						printf("%d ",aux);
					}
					printf("\n");
				}
				printf("\n\n¿Deseas regresar al menú? <Si = 1 / No = 0>\n>");
					scanf("%d",&x);
				}break;
				
			case 3:
			{
				system("cls");
			    printf("Cuantos numeros deseas ingresar? \n>");
			    scanf("%d",&c);
			    int vec1[c];
			    system("cls");
			    printf("Ingresa el 1 valor: ");
			    scanf("%d",&vec1[0]);
			    
			    a=vec1[0];
			    b=vec1[0];
			    
				    for (i = 1; i < c; i++)
					{
				        printf("Ingresa el %d valor: ", i+1);
				        scanf("%d",&vec1[i]);  
				    }
				    for(j = 0; j < c; j++)
					{
						for (i = 0; i < c; i++)
						{
							if(j == 0 && j == 0)
							{
								if(vec1[i] > a)
								{
									d= vec1[i];
									vec1[i] = a;
									a = d;
								}
							}
							else
							{
								vec1[0] = a;
								if(vec1[i] > vec1[i-1])
								{
									d= vec1[i];
									vec1[i] = vec1[i-1];
									vec1[i-1] = d;
								}
							}
						}
					}
			    system("cls");
			    printf("Los numeros de mayor a menor son: \n");
			    for(i = 0; i < c; i++)
				{
			    	printf("%d\n",vec1[i]);
				}
				printf("\n¿Deseas regresar al menú? <Si = 1 / No = 0>\n>");
					scanf("%d",&x);
			}break;
			
			case 5:
				{
					do{
					system("cls");
					printf("¿Cuántas filas y columnas deseas ingresar? (Tu matriz sera cuadrada)\n>");
					scanf("%d",&f);
					}while(f <= 0);
					int mat1[f][f];
					
					for( i=0; i<f;i++) 
					{
						for( j=0; j<f;j++) 
						{
							mat1[i][j] = (i==j); //si i=j entonces A[i][j]=1 en caso contrario 0 
						}
					}
					for( i = 0; i < f; i++)
					{
						for( j = 0; j < f; j++)
						{
							printf("%d   ", mat1[i][j]);
						}
						printf("\n");
					}
					printf("\n¿Deseas regresar al menú? <Si = 1 / No = 0>\n>");
					scanf("%d",&x);
				}break;
			case 4:
				{
						system("cls");
				    	cont = 1;
					    printf("¿Cuántas filas deseas ingresar? \n>");
					    scanf("%d",&c);
					    printf("¿Cuántas columnas deseas ingresar? \n>");
					    scanf("%d",&f);
					    int mat[c][f];
						system("cls");
						a = 0;
						for(j = 0; j < c; j++)
						{
							for(i = 0; i < f; i++)
							{
								printf("Ingresa el %d valor:  ",cont);
								scanf("%d",&mat[j][i]);
								cont++;
							}	
						}
						
				    
				    printf("\nLos datos originales de la matriz son:\n");
				    for(i=0; i<c; i++)
				    {
				        for(j=0; j<f; j++)
				        {
				            printf("%d    ", mat[i][j]);
				        }
				        printf("\n");
				    }
				 
				     for(int i=0; i<c; i++)
				     {
				        for(int j=0; j<f; j++)
				        {
				            for(int m=0; m<f;m++)
				            {
				                for(int n=0; n<c; n++)
				                {
				                    if(mat[i][j]<mat[m][n])
				                    {
				                        a=mat[i][j];
				                        mat[i][j]=mat[m][n];
				                        mat[m][n]=a;
				                    }
				 
				                }
				            }
				         }
				    }
				 
				    printf("\nLos datos ordenados de menor a mayor son:\n");
				    for(i=0; i<c; i++)
				    {
				        for(j=0; j<f; j++)
				        {
				            printf("%d   ", mat[i][j]);
				        }
				        printf("\n");
				    }
				    printf("\n¿Deseas regresar al menú? <Si = 1 / No = 0>\n>");
					scanf("%d",&x);
				}break;
			case 6:
				x = 0;
			break;	
		}
	}while(x == 1);
	system("cls");
	printf("\t\t\t\t\t    Gracias.Presione <ENTER> para salir\n\n");
	getch();
}
