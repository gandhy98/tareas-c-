#include<string>
#include<iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    float radio, area, longitud;

    cout<<"INGRESE EL RADIO DEL CIRCULO"<<endl;
    cin>>radio;

    area = M_PI*radio*radio;
    longitud = M_PI*2*radio;

    cout<<"El area del circulo es: "<<area<<endl;
    cout<<"La longitud de la crcunferencia es: "<<longitud<<endl;
    return 0;
}



