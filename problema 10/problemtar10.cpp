#include<string>
#include<iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main()
{
    float radio, altura, generatriz;
    float volumen, area_total;

    cout<<"INGRESE EL RADIO DEL CONO"<<endl;
    cin>>radio;

    cout<<"INGRESE LA ALTURA DEL CONO"<<endl;
    cin>>altura;

    generatriz = sqrt(radio*radio+altura*altura);

    volumen = (M_PI*radio*radio*altura)/3;
    area_total = M_PI*radio*(generatriz + radio);


    cout<<"Volumen del cono: "<<volumen<<endl;
    cout<<"Area total del cono: "<< area_total<<endl;

    return 0;
}



