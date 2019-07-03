#include <iostream>

using namespace std;
int main ()
{
	int a;
	printf ("pon el año :" );
	scanf("%d",& a);
	
	if ((a % 4==0 )&& (a % 100!=0 )|| (a %400==0) )
	printf("el año  es bisiesto: ");
	else
   
	printf ("el año  no es bisiesto"); 
	
	return 0;
	
	
		cout<<endl;
		
	
}

