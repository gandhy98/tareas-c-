#include<string>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int num1, num2, cociente1, producto, resto;

    cout<<"INGRESE NUMERO 1"<<endl;
    cin>>num1;

    cout<<"INGRESE NUMERO 2"<<endl;
    cin>>num2;

    cociente1 = num1/num2;
    producto = num1*num2;
    resto = num1%num2;

    cout<<"producto: "<<producto<<endl;
    cout<<"cociente: "<<cociente1<<endl;
    cout<<"resto: "<<resto;
}



