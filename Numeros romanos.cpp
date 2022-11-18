#include <cstdlib>
#include <iostream>
#include <conio.h >

using namespace std;

int main(int argc, char *argv[])
{
    int x,um,r1,cent,r2,uni,dec;
    cout<<"Dame un valor entre 1 y 3999"<<endl;cin>>x;
    if(x<1||x>3999)cout<<"Valor fuera de rango."<<endl;
    else{
        um=x/1000;
        r1=x%1000;
        cent=r1/100;
        r2=r1%100;
        dec=r2/10;
        uni=r2%10;
        cout<<"El numero romano es: ";
        switch(um){
            case 3:cout<<"M";break;
            case 2:cout<<"M";break;
            case 1:cout<<"M";break;
        }
        switch(cent){
            case 1:cout<<"C";break;
            case 2:cout<<"CC";break;
            case 3:cout<<"CCC";break;
            case 4:cout<<"CD";break;
            case 5:cout<<"D";break;
            case 6:cout<<"DC";break;
            case 7:cout<<"DCC";break;
            case 8:cout<<"DCCC";break;
            case 9:cout<<"CM";break;    
        }
        switch(dec){
            case 1:cout<<"X";break;
            case 2:cout<<"XX";break;
            case 3:cout<<"XXX";break;
            case 4:cout<<"XL";break;
            case 5:cout<<"L";break;
            case 6:cout<<"LX";break;
            case 7:cout<<"LXX";break;
            case 8:cout<<"LXXX";break;
            case 9:cout<<"XC";break;
        }
        switch(uni){
            case 1:cout<<"I";break;
            case 2:cout<<"II";break;
            case 3:cout<<"III";break;
            case 4:cout<<"IV";break;
            case 5:cout<<"V";break;
            case 6:cout<<"VI";break;
            case 7:cout<<"VII";break;
            case 8:cout<<"VIII";break;
            case 9:cout<<"IX";break;
        }
    }
    getch();
    cin.get();
    return EXIT_SUCCESS;
}
