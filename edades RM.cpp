#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <conio.h>

main()
{ 

system ("color A" );//ejemplo 
int edad;
 
  printf("Dame la edad");
	scanf("%d", &edad);
	if(edad <= 10)
	printf( "Es un ninio\n");
	 else if(edad>10&edad<65)
	 printf("Estas adulto\n");
	 	else if(edad>=65)
	 	printf("Ya estas viejo\n");
getch();	
}

