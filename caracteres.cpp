#include <conio.h>
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <string.h>
int main()
{   system("color 3e");
    int a=0, i=0;
    char snombre[20], nombre[20], apellido[20], sapellido[20];
    system("color 3e");
    do
    {
        printf(" SI Tiene dos Nombres preciona (1 si tiene dos nombres) o (2 si tiene solo uno)");
        scanf("%d",&a);
        if(a==1)
        {
        printf("Introduce el primer nombre del trabajador:\t\t");
        scanf("%s",&snombre);
    
        printf("\nIntroduce el  nombre del trabajador:\t\t");
        scanf("%s",&nombre);
        printf("\nIntroduce el primer apellido del trabajador:\t\t");
        scanf("%s",&apellido);
        printf("\nIntroduce el segundo apellido del trabajador:\t\t");
        scanf("%s",&sapellido);
         printf("\nUsted es %s %s %s %s",snombre,nombre,apellido,sapellido);
        }
        if(a==2)
        {
        printf("\nIntroduce el  nombre del trabajador:\t\t");
        scanf("%s",&nombre);
        printf("\nIntroduce el primer apellido del trabajador:\t\t");
        scanf("%s",&apellido);
        printf("\nIntroduce el segundo apellido del trabajador:\t\t");
        scanf("%s",&sapellido);
         printf("\nUsted es %s %s %s %s",nombre,apellido,sapellido);
        }
        
    

        printf("\nDesea escribir otro nombre (preciona 1)");
        scanf("%d",&i);
    }while(i==1);
    
    
    getch();
}
    
