#include <iostream>

using namespace std;
int main ()
{
	int a;
	printf ("pon el a�o :" );
	scanf("%d",& a);
	
	if ((a % 4==0 )&& (a % 100!=0 )|| (a %400==0) )
	printf("el a�o  es bisiesto: ");
	else
   
	printf ("el a�o  no es bisiesto"); 
	
	return 0;
	
	
		cout<<endl;
		
	
}

