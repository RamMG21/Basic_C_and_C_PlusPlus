#include <stdio.h>
#include <stdlib.h>
#include <iostream>
 

main()
{ 

system ("color A" );//ejemplo 
int peso=0;
 
  printf("Dame el peso");
	scanf("%d", &peso);
	if(peso < 500)
	printf( "El peso es menos de media tonelada/n");
	 else if(peso==500)
	 printf("El peso es media tonelada/n");
	 	else if(peso>500)
	 	printf("El peso es mayor a media tonelada/n");
getchar();	
}

