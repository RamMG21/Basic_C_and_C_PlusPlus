#include <string.h>
#include <iostream>
#include <windows.h>
#include <conio.h>
int main()

{
	system("color 3f");
	int x=0;
	do
	{
	
	char completo[50];
	char nombre[50],nombre2[50];
	char apellido[50];
	char apellido2[50];
	char apellidos[50];
	system("cls");
	printf("Dame tu nombre:\t");
	scanf("%s",&nombre);
	printf("Dame tu nombre:\t");
	scanf("%s",&nombre2);
	printf("\nSi es mayor a  ""0"" el primer nombre es menor al  segundo nombre \nEs igual a 0 si el primer nombre == al segundo nombre \nMenor a ""0"" si el primer nombre es mayor al segundo nombre\n");
		printf( "Comparacion con strcmp: %i\n",
        strcmp(nombre,nombre2));
	printf("Dame tus pellidos:\t");
	scanf("%s\t%s",&apellido,&apellido2);
	sprintf(apellidos, "%s %s",apellido,apellido2);
	sprintf( completo, "%s %s", nombre, apellidos );
	printf("El nombre completo es: %s.\n",completo );
	printf("\n");
	printf("\n");
	printf("Deseas regresar al menu oprime >1 o >2 para salir");
	scanf("%d",&x);
	}while(x==1);
	getch();
}
