#include<string>
#include<iostream>

using namespace std;

int main()
{
    std::string cadena = "hola mundo";
	char buffer[100];
	strcpy(buffer,cadena.c_str());
	std::cout << buffer;
	
    cin.get();
}


