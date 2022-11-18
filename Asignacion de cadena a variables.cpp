#include <stdio.h>
#include <string.h>

 int main()
{
	char completo[50];
	char nombre[]="Rosy";
	char apellido[]="Avendanio Lopez";

	sprintf( completo, "%s %s", nombre, apellido );
	printf( "El nombre completo es: %s.\n",completo );

getchar();
}
