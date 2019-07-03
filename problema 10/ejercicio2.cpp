#include<string>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{

    string cadena_hora,hora, minuto;
    int horafin, horaentrada, minutoentrada;


    cout << "Ingrese la hora:";
    getline(cin, cadena_hora);

    if(cadena_hora.length()==5){

        hora=cadena_hora.substr(0,2);
        minuto= cadena_hora.substr(3,2);

        horaentrada = atoi(hora.c_str());
        minutoentrada = atoi(minuto.c_str());

        if(horaentrada <= 24 && horaentrada>=0 && minutoentrada>=0 && minutoentrada<60){

            if(horaentrada >= 13){

                switch(horaentrada){
                    case 13:
                        horafin=1;
                        break;
                    case 14:
                        horafin=2;
                        break;
                    case 15:
                        horafin=3;
                        break;
                    case 16:
                        horafin=4;
                        break;
                    case 17:
                        horafin=5;
                        break;
                    case 18:
                        horafin=6;
                        break;
                    case 19:
                        horafin=7;
                        break;
                    case 20:
                        horafin=8;
                        break;
                    case 21:
                        horafin=9;
                        break;
                    case 22:
                        horafin=10;
                        break;
                    case 23:
                        horafin=11;
                        break;
                    case 24:
                        horafin=0;
                        break;
                }

                cout<<"la hora en formato 12 es "<<horafin<<":"<<minuto<<" PM";
            }else{

                cout<<"la hora en formato 12 es "<<cadena_hora<<" AM";

            }
        }else{

            cout<<"Error. La hora o minuto no se corresponde";

        }



    }else{

        cout<<"Error, inténtelo otra vez... ";
    }



}



