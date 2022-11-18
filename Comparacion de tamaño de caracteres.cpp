//"	< 0 si cadena1 < cadena2
//"	==0 si cadena1 == cadena2
//"	> 0 si cadena1 > cadena2

#include<stdio.h>
#include<string.h>

 int main()
{
	char nombre1[]="Rosy";
	char nombre2[]="NO";

	printf( "Comparacion con strcmp: %i\n",
        strcmp(nombre1,nombre2));
        getchar();
}
