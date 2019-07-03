#include<string>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int longitud, anchura;
    int superficie, perimetro;

    cout<<"INGRESE LONGITUD"<<endl;
    cin>>longitud;

    cout<<"INGRESE ANCHURA"<<endl;
    cin>>anchura;

    superficie = longitud*anchura;
    perimetro = 2*(longitud+anchura);

    cout<<"La superficie es de: "<<superficie<<endl;
    cout<<"El perimetro es de: "<<perimetro<<endl;


}

