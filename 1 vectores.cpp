#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


main()
{
    int arreglo[10], i, total=0;
    printf("\t\t\t\tPromedios del grupo de 1er semestre en la meteria de programacion #1\n");
    
   

    for (i=0; i<=9; i++)
    
    {
        printf("Dame la calificacion %d:",i+1);
        scanf("%d", &arreglo[i]);
        
        total=total+arreglo[i];
    }
    total=total/10;
    printf("el promedio total de la materia de programacion 1 es: %d\n", total);
    if (total<7)
     printf("Estan reprovados");
     
     else (total>7 || total<9);
     printf("Estan en condiciones aceptables");
    
      
     
    
    getch();
}
