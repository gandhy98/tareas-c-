#include <iostream>
#include <string>

using namespace std;

int main(){
	
	int numero_mes = 1; 
	string resultado_mes;
	
	
	cout<<"Introduce numero mes"<<endl;
	cin>>numero_mes;
	
	resultado_mes="no hay";
	
	switch(numero_mes){
		case 1:
			resultado_mes="enero";
			cout<<"mes enero";
		break;
		
		case 2:
			resultado_mes="febrero";
			cout<<"mes febrero";
		break;
		
		case 3:
			resultado_mes="marzo";
			cout<<"mes marzo";
		break;
		
		case 4:
			resultado_mes="abril";
			cout<<"mes abril";
		break;
		
		case 5:
			resultado_mes="mayo";
			cout<<"mes mayo";
		break;
		
		case 6:
			resultado_mes="junio";
			cout<<"mes junio";
		break;
		
		case 7:
			resultado_mes="julio";
			cout<<"mes julio";
		break;
		
		case 8:
			resultado_mes="agosto";
			cout<<"mes agosto";
		break;
		
		case 9:
			resultado_mes="septiembre";
			cout<<"mes septiembre";
		break;
		
		case 10:
			resultado_mes="octubre";
			cout<<"mes octubre";
		break;
		
		case 11:
			resultado_mes="nobiembre";
			cout<<"mes noviembre";
		break;
		
		case 12:
			resultado_mes="diciembre";
			cout<<"mes diciembre";
		break;
		
		default:
			cout<<"El numero no corresponde con los meses existentes";
		break;	
		
	}
	
	
	cout<<endl;
	
		//"enero" != "no hay" == true
		//"no hay" != "no hay" == false		
	if(resultado_mes != "no hay"){
		
		cout<<"El mes seleccionado es: "<<resultado_mes;	
		
	}
	
	
	
	
}
