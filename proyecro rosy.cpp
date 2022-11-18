#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>

int main(int argc, char** argv) {
	system ("color 1f" );
	int op,op2,op3,menu, peso=0, x=0, y=0, sueldo=0, numero=0, numeroal=0, suma=0, yacon=0, producto=0, resta=0, division=0, cosiente=0, perimetro=0, x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0,x9=0,x0=0, r=0, area=0, materias=0, total=0;	
	op,op2,op3=0;
	float radio=0, z=0, w=0, R=0, yukon=0, acum=0;
	float Cal=0, prom=0;
	int Ncal=0, cal=0,  suma1=0, i=0;
	again:
		system("cls");
	do{
	if(op!=1 && op!=2 && op!=0 && op!=3 && op!=4 && op!=5 && op!=6 && op!=7 && op!=8 && op!=9 && op!=10 && op!=11 && op!=12)
	{
		system("cls");
	}
	printf("Menu\n");
	printf("\nLenguaje de computacion\n");
	printf("\nAlgoritmos\n");
	printf("\n 1.  Obtener el area de un rectangulo\n");
	printf("\n 2.  Obtener el sueldo a pagar de un trabajador segun los dias trabajados\n");
	printf("\n 3.  Que sirva para obtener el doble de un numero\n");
	printf("\n 4.  Que sirva para obtener el cuadrado de un numero\n");
	printf("\n 5.  Que nos muestre la suma, el producto y el cosiente de 2 numeros dados\n");
	printf("\n 6.  Que sirva para calcular el perimetro de un terreno rectangular\n");
	printf("\n 7.  Que sirva para obtener el promedio de calificaciones del primer parcial\n");
	printf("\n 8.  Que sirva para obtener el area de un circulo\n");
	printf("\n 9.  Que sirva para obtener la cantidad a pagar en la comra de un articulo tomando en cuanta\n     el precio y la cantidad comprada\n");
	printf("\n 10. Que sirva para obtener la resta y la division de dos numeros\n");
	printf("\n 11. Que sirva para obtener la cantidada a pagar en la compra de un articulo tomando en cuanta\n     el precio y la cantidad ademas de un descuanto del 10%% en el total\n");
	printf("\n 12. Que sirva para obtener la cantidad a pagar considerando el precio del producto, la cantidad\n     comprada pero incrementando 15%% de IVA\n");
	scanf("%d",&op);
	system("cls");
	}while(op !=1 && op!=2 && op!=3 && op!=4 && op!=5 && op!=6 && op!=7 && op!=8 && op!=9 && op!=10 && op!=11 && op!=12);
	switch(op){ //despues de realizar una operacion preciona 1 para abrir la eleccion de regreso o permanencia
		case(1):
			            printf("\n 1.  Obtener el area de un rectangulo\n");
						printf("Inicio\n 1.Dame la medida de la base y la altura\n 2.Leer la base y la altura\n 3.Multiplicar base por la altura\n 4.Dame el resultado\n 5.Fin\n");
					printf("Damse la base y la altura");
				
					scanf("%d",&x);
					scanf("%d",&y);
					peso=x*y;
					printf("El area del rectangulo %d",peso);
					
					
				 		scanf("%d",&op2);
				 		printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1|| menu == 1){
				 		
						 goto again;
				 	break;
				 }
	 
		case(2):
				printf("\n 2.  Obtener el sueldo a pagar de un trabajador segun los dias trabajados\n");
			    printf("Inicio\n 1.Pedir el sueldo de un dia\n 2.Pedir el numero de dias trabajados\n 3.Leer el suledo y el numero de dias trabajados 4.Multiplicar el sueldo de un dia por los dias trabajados\n 5.Mostrar resultado\n Fin\n");
			 printf("Dame el sueldo del trabajador y el numero de dias trabajados\n");
	 		        scanf("%d",&x);
					scanf("%d",&y);
					sueldo=x*y;
					printf("El total a pagar es %d",sueldo);
	 		
	 		scanf("%d",&op3);
	 		       
	 		
		 
			printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
			
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
		break;
						 
	 	case(3):
	 	
		 	printf("\n 3.  Que sirva para obtener el doble de un numero\n");
	 		printf("\n\nInicio\n 1.Dame un numero entero\n 2.Leer el numero\n 3.Multiplica el numero por 2\n 3.Muestra el resultado\n Fin\n");
	 printf("Dame un numero\n");
	 		        scanf("%d",&x);
				
					numero=x*2;
					printf("El doble del numero es %d",numero);
     scanf("%d",&op3);
	 		
		 
			printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
	 	break;
	 	
	 	case(4):
	 		
			     printf("\n 4.  Que sirva para obtener el cuadrado de un numero\n");
	 	    	printf("\n\nInicio\n 1.Dame un numero entero\n 2.Leer el numero\n 3.Multiplica el numero por el mismo\n 3.Dame el resultado\nFin");
	 	  printf("Dame un numero entero\n");
	 		        scanf("%d",&x);
				
					numeroal=x*x;
					printf("El cuadrado del numero es %d",numeroal);
            scanf("%d",&op3);
	 	   
	 		
		 
			printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
	 		
	 	break;
		 
		case(5):
			printf("\n 5.  Que nos muestre la suma, el producto y el cosiente de 2 numeros dados\n");
			printf("\n\nInicio\n 1.Dame dos numeros enteros\n 2.Leer los dos numeros\n 3.Suma los dos productos\n 3.Mostrar resultado\n 4.Multiplica los dos numeros\n 5.muestrame el resultado\n 6.Obten el cosiente del primer numero sobre el segundo numero\n 7.Muestrame el reultado\nFin\n");
	    printf("Dame dos numeros enteros\n\n");
				
					scanf("%d",&x);
					scanf("%d",&y);
					suma=x+y;
					producto=x*y;
					cosiente=x/y;
					printf("la suma es %d\n",suma);
					printf("El producto es %d\n",producto);
					printf("El cosiente es %d\n",cosiente);
					
	 		scanf("%d",&op3);
	 		
		 
			printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
		break;
		
		case(6):
			printf("\n 6.  Que sirva para calcular el perimetro de un terreno rectangular\n");
			printf("\n\nInicio\n 1.Dame la medida de la base\n 2.Dame la medida de la altura\n 3.Leer la base y la altura\n 4.Sumar la base por la altura\n 5.Multiplicar el resultado por 2\n 6.Muestra el resultado\nFin\n");
			printf("Damse el largo y el ancho del terreno\n");
				
					scanf("%d",&x);
					scanf("%d",&y);
					perimetro=x+x+y+y;
					printf("El perimetro del terreno es %d",perimetro);
        	scanf("%d",&op3);
	 		
		 
			printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
		break;
		
		case(7):
			printf("\n 7.  Que sirva para obtener el promedio de calificaciones del primer parcial\n");
			printf("\n\nInicio\n 1.Dame las calificaciones\n 2.Leer las calificaciones\n 3.Sumar las calificaciones\n 4.Al resultado dividirlo entre el numero de calificaciones que se metieron\n 5.Muestrame el resultado\nFin\n");
				printf("Numero de calificaciones");
				scanf("%d",&cal);
  					for (suma1=1; suma1<=Ncal; suma1++)
  					{
					  
					  printf("Dame otra calificacion");
					  suma1=suma1+acum;
	                  	
					
			
					  }
  					prom=suma1/Ncal;
  					printf("El promedio es %f",prom);
					
			
			
			//esta operacion esta pendiente
		
		
			
				
				
            scanf("%d",&op3);
	 		
		 
			printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
		break;
		
		case(8):
			printf("\n 8.  Que sirva para obtener el area de un circulo\n");
			printf("\n\nInicio\n 1.Dame la medida del radio\n 2.Leer el numero\n 3.Multiplicar el numero por si mismo\n 4.Al resultado multiplicarlo por 3.1416\n 5.Muestrame el resultado\nFin");
				printf("\nDame el radio \n");
				scanf("%f",&radio);
				radio=radio*radio;
				radio=radio*3.1416;
				printf("el area es %f",radio);
				
			
				
					
					
			scanf("%d",&op3);
			
	 		
		 
			printf("Quieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
		break;
		
		case(9):
			printf("\n 9.  Que sirva para obtener la cantidad a pagar en la comra de un articulo tomando en cuanta\n     el precio y la cantidad comprada\n");
			printf("\n\nInicio\n 1.Dame el precio del articulo y la cantidad de articlos\n 2.Leer precio y cantidad\n 3.Multiplica el precio por la cantidad de articulos\n 4.Muestrame el resultado\nFin");
			
			printf("Dame el numero de articulos a pagar\n");
			scanf("%d",&x);
			printf("Dame el precio del producto\n");
			scanf("%d",&y);
			total=x*y;
			printf("la cantidad a pagar es %d\n",total);
			scanf("%d",&op3);
	 		
		 
			printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
			
		break;
		
		case(10):
			printf("\n 10. Que sirva para obtener la resta y la division de dos numeros\n");
			printf("\nInicio\n 1.Dame dos numeros entereos\n 2.Leer los dos numeros\n 3.Resta el los dos numeros por el orden de entrega\n 4.Imprimir: este es el resultado de la resta\n 5.Muestrame el resultado\n 6.Divide los numeros por el orden de entrega\n 7.Imprimir: Este es el resultado de la divison\n 8.Muestrame el resultado\nFin\n");
			printf("Dame un numero enteros\n");
			scanf("%d",&x);
			printf("Dame un numero enteros\n");
			scanf("%d",&y);
			resta=x-y;
			division=x/y;
			printf("El resultado de la resta es %d\n",resta);
			printf("El resultado de la division es %d\n",division);
			scanf("%d",&op3);
	 		
		 
			printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
			
		break;
		
		case(11):
			printf("\n 11. Que sirva para obtener la cantidada a pagar en la compra de un articulo tomando en cuanta\n     el precio y la cantidad ademas de un descuanto del 10%% en el total\n");
			printf("\nInicio 1.Dame el precio del articulo y la cantidad de articulos\n 2.Leer el precio y la cantidad 2.Multiplica el precio del articulo por la cantidad\n 3.Al resultado1 multiplicalo por 0.1\n 4.Al resultado1 resta lo del resultdo2\n 5.Imprimir el resultado a pagar es:\n 6.Muestrame el resultado\nFin\n");
				printf("Dame el precio del producto\n");
				scanf("%f",&z);
				printf("Dame la cantidad de productos\n");
				scanf("%f",&w);
				R=z*w;
				yukon=R/100;
				yukon=yukon*10; 
				R=R-yukon;
				printf("El total a pagar es %f",R);
				scanf("%f",&op3);
	 		
		 
			printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
				 		scanf("%d",&menu);
				 		if(menu == 1 || menu == 1){
				 			goto again;
				 			system("cls");
						 }
		break;
		
		case(12):
			printf("\n 12. Que sirva para obtener la cantidad a pagar considerando el precio del producto, la cantidad\n     comprada pero incrementando 15%% de IVA\n");
			printf("\nInicio 1.Dame el precio del articulo y la cantidad de articulos\n 2.Multiplica el precio del articulo por la cantidad\n 3.Al resultado1 multiplicalo por 0.15\n 4.Al resultado1 suma lo del resultdo2\n 5.Imprimir el resultado a pagar es:\n 6.Muestrame el resultado\nFin\n");
			printf("Dame el precio del producto\n");
			scanf("%d",&x);
			printf("Dame la cantidad de productos\n");
			scanf("%d",&y);
			total=x*y;
			yacon=total/100;
			yacon=yacon*15;
			total=total+yacon;
			printf("El total a pagar es %d",total);
	
				printf("\n\nQuieres regresar al menu? (Si = 1 No = 2)\n>");
			scanf("%d",&op3);
	 		
		 
		
				 		scanf("%d",&menu);
				 		if(menu == 1|| menu==1){
				 			goto again;
				 			system("cls");
						 }
		break;
			
		
	 }
		 getchar();
	}
	 
	
		
	
