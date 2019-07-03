#include<string>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include <iomanip>

using namespace std;

void gotoxy(int,int);

int main()
{
    int contador = 0;
    string numero1;
    int num1, num2, num3;
    int suma, producto;
    bool condicion = true;

    //Para el primer numero
    while(condicion==true){
        cout<<"Ingrese NUM 1 de tres digitos"<<endl;
        cin>>numero1; //212

        if(numero1.length()==3){
            condicion=false;
        }
        num1=atoi(numero1.c_str());
    }

    condicion=true;
    //Para el segundo numero
    while(condicion==true){
        cout<<"Ingrese NUM2 de tres digitos"<<endl;
        cin>>numero1;//522

        num2=atoi(numero1.c_str());
        if(numero1.length()==3){
            condicion=false;
        }

    }

    condicion=true;
    //Para el tercer numero
    while(condicion==true){
        cout<<"Ingrese NUM3 de tres digitos"<<endl;
        cin>>numero1;

        num3=atoi(numero1.c_str());
        if(numero1.length()==3){
            condicion=false;
        }
    }

    suma=num1+num2+num3;
    producto = num1*num2*num3;

    //gotoxy(30,0);
    cout<<setw(70) <<"SUMA: "<<suma<<endl;

    //gotoxy(30,1);
    cout<<setw(70) <<"PRODUCTO: "<<producto<<endl;

	//cin.get();

    return 0;
}


/*
//Función para espacios
void gotoxy(int x, int y){
    HANDLE Manipulador;
    COORD Coordenadas;
    Manipulador = GetStdHandle(STD_OUTPUT_HANDLE);
    Coordenadas.X=x;
    Coordenadas.Y=y;
    SetConsoleCursorPosition(Manipulador, Coordenadas);
}

*/

