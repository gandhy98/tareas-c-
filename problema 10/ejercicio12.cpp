#include<string>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    string numero1;
    int num1, num2, num3;
    int suma, producto, resultado;
    bool condicion = true;

    cout<<"Ingrese NUM 1 de tres digitos"<<endl;
    cin>>numero1; 
    num1=atoi(numero1.c_str());

    cout<<"Ingrese NUM 2 de tres digitos"<<endl;
    cin>>numero1; 
    num2=atoi(numero1.c_str());

    cout<<"Ingrese NUM 3 de tres "<<endl;
    cin>>numero1; 
    num3=atoi(numero1.c_str());

    if(num3>=0){
        suma=num1+num2+num3;
        resultado = suma;
        cout<<"SUMA"<<endl;
    }else{
        producto = num1*num2*num3;
        resultado =producto;
        cout<<"PRODUCTO"<<endl;
    }

    cout<<"El resulatdo es: "<<resultado;

    return 0;
}

