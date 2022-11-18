#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

int main(int argc, char** argv) {
	system ("color 1D" );
	
    char c;
	
		system("cls");
	
	{
		system("cls");
	}
	printf("Elije una marca\n");
	printf("Marcas disponibles\n");
	printf("Elige tu opcion:\n");
	printf("a.- Ford\n");
	printf("b.- Nissan\n");
	printf("c.- Chevrolet\n");
	printf("4.- SALIR\n");
	scanf("%c",&c);

	switch(c)
	{    
        case 'a':
	       printf("Autos: Focus,\n Fiesta,\n Mustang,\n Fusion,\n Taurus\n Crosover y subs:\n Escape\n Edge\n Flex\n Explorer\n Expedition\n Transit Conect\n Camionetas:\n F-150\n Super Duty\n Raptor\n ");
	    break;
			
	   
	    case 'b':
	       printf("Autos:\n Sentra\n Tsuru\n Maxima\n Altima\n Camionetas:\n Frontier\n");
            break;
        case 'c':
        	printf("Autos:\n Malibu\n Spark\n Camaro\n Aveo\n Sonic\n Curse\n Camionetas:\n Silverado\n Cheyenne\n Colorado\n Tornado\n");
        	break;
        case'4':	
           printf("Que tenga lindo dia");
           break;
    }		
						
					getch();
}
