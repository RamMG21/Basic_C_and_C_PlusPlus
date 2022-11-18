#include<stdio.h>
#include<conio.h>
#include<time.h>
#include <windows.h>
main(){
	system("color 4e");
    srand(time(NULL));
    int num=0,i,a=0;
    printf("Programa que genera numeros aleatorios y te dice cual es par he impar\n");
    for(i=0;i<=10;i++){
    num=rand()%1000;
    if(num%2==0){
    printf("%d   el numero es par \n",num);
    }
    else{
    printf("%d   el numero es impar \n",num);
    }
    }
    getchar();

}
