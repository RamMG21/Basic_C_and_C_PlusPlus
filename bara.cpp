#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
int main (){
	system ("color 1a" );
	 int precio=0, pago=0, diferencia=0, sobrante=0;
	 printf("pedir el precio");
	 scanf("%d",&precio);
	 printf("Dame el pago");
	 scanf("%d",&pago);
	    if (precio==pago ){
	    printf("El pago es exacto");
			}
	     else if (precio>pago ){
	     scanf("%d",&diferencia);
	 	diferencia=precio-pago;
		printf("Te falta %d",diferencia);
		}
		if (precio<pago){
			scanf("%d",&sobrante);
			sobrante=pago-precio;
			printf("Su cambio es %d\n",sobrante);
		}
	printf("\ngracias por su compra\n");
	getchar();
	
}
