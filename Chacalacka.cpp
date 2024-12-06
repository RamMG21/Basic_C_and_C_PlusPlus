#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <bits/stdc++.h>
//Hola Proyecto de optimizaión

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	Sleep(50);
	system("color 1A");
	Sleep(50);
	system("color 2A");
	Sleep(50);
	system("color 3A");
	Sleep(50);
	system("color 4A");
	Sleep(50);
	system("color 5A");
	Sleep(50);
	system("color 6A");
	Sleep(50);
	system("color 7A");
	Sleep(50);
	system("color 8A");
	Sleep(50);
	system("color 9A");
	Sleep(50);
	system("color CA");
	Sleep(50);
	system("color AA");
	Sleep(50);
	system("color BA");
	Sleep(50);
	system("color DA");
	Sleep(50);
	system("color EA");
	Sleep(50);
	system("color FA");
	Sleep(50);
	system("color 1A");
	Sleep(50);
	system("color 2A");
	Sleep(50);
	system("color 3A");
	Sleep(50);
	system("color 4A");
	Sleep(50);
	system("color 5A");
	Sleep(50);
	system("color 6A");
	Sleep(50);
	system("color 7A");
	Sleep(50);
	system("color 8A");
	Sleep(50);
	system("color 9A");
	Sleep(50);
	system("color CA");
	Sleep(50);
	system("color AA");
	Sleep(50);
	system("color BA");
	Sleep(50);
	system("color DA");
	Sleep(50);
	system("color EA");
	Sleep(50);
	system("color FA");
	Sleep(50);
	system("color 0A");
	char strrnd[10];
    srand(time(NULL));
    for(int j= 0; j < 400; j++)
    {
	    for(int i=0; i <= 9; i++)
	    {
	        strrnd[i] = 33 + rand() % (126 - 33);
		}
		Sleep(5);
	    cout << strrnd;
	}
    system("cls");
	cout << "Bienvenido a la Ouija, diga las palabras mágicas [Solo si eres todopoderoso]"<<endl;
	char pass[1];
	char pass2[1];
	inicio:
	pass[1] = getch();
	char nom[9];
	if(pass[1] == ',')
	{	
	nom[0] = getch();
	cout << "C";
	if(nom[0] != '.')
	nom[1] = getch();
	else
	getch();
	cout << "h";
	if(nom[1] != '.')
	nom[2] = getch();
	else
	getch();
	cout << "a";
	if(nom[2] != '.')
	nom[3]= getch();
	else
	getch();
	cout << "k";
	if(nom[3] != '.')
	nom[4] = getch();
	else
	getch();
	cout << "a";
	if(nom[4] != '.')
	nom[5] = getch();
	else
	getch();
	cout << "l";
	if(nom[5] != '.')
	nom[6] = getch();
	else
	getch();
	cout << "a";
	if(nom[6] != '.')
	nom[7] = getch();
	else
	getch();
	cout << "c";
	if(nom[7] != '.')
	nom[8] = getch();
	else
	getch();
	cout << "k";
	if(nom[8] != '.')
	nom[9] = getch();
	else
	getch();
	cout << "a";
	getchar();
	getchar();
	if(nom[0] == '.')
	cout << endl<< "Los chamucos de la Ouija no estan disponibles el dia de hoy";
	if(nom[0] == '?')
	cout << endl<< "¿De casualidad eres foráneo?";
	if(nom[0] == '/')
	cout << endl<< "Por gente como tú, el shampoo viene con instrucciones";
	if(nom[0] == '+')
	cout << endl<< "Eres la única razón por la que el fin del mundo comienza ahora";
	if(nom[0] == '*')
	cout << endl<< "Ni Beas conoce la respuesta";
	if(nom[0] == '-')
	cout << endl<< "Tú inteligencia no es apta para tal obra maestra";
	if(nom[0] == '¿')
	cout << endl<< "No eres digno de conocer los secretos del universo";
	else if(nom[0] != '¿' && nom[0] != '.' && nom[0] != '?' && nom[0] != '/' && nom[0] != '+' && nom[0] != '*' && nom[0] != '-')
	cout<<endl << nom;
	}
	else
	{
		cout << "Tú eres un simple mortal" << endl ;
		goto inicio;
	}
	getchar();
}
