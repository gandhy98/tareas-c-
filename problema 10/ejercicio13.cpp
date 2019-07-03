#include<string>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    float pago_xhrs;
    float sueldo_temporal, sueldo_total, sueldo_normal, pago_xhrs_extras,sueldo_extras;
    float impuesto_normal, impuesto_mayor;
    int horas_trabajadas=37, horas_extras;


    cout<<"Ingrese pago x horas (tasa dada)"<<endl;
    cin>>pago_xhrs;

    cout<<"Ingrese horas extras"<<endl;
    cin>>horas_extras;

    pago_xhrs_extras= pago_xhrs + pago_xhrs*50/100;
    sueldo_normal = 37*pago_xhrs;

    sueldo_extras=0;
    if(horas_extras>0){
        sueldo_extras=horas_extras*pago_xhrs_extras;
    }


    sueldo_temporal = sueldo_normal + sueldo_extras;
    impuesto_mayor = sueldo_temporal*10/100;
    impuesto_normal=sueldo_temporal*0/100;

    if(sueldo_temporal > 600){
        sueldo_total=sueldo_temporal-impuesto_mayor;
    }else{
        sueldo_total = sueldo_temporal-impuesto_normal;
    }

    cout<<"EL SUELDO SEMANAL ES "<<sueldo_total;

    return 0;
}


