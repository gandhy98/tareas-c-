#include<iostream>
using namespace std;

int main()
{
		int  a;
		cout<<("introdusca el numero : ");
		cin>> a;
		
		

	
	
	while (a>=2000 ) {printf("MM");a -=2000;}
	if (a >=1000){printf("M");a -=1000;}
    if (a >=900){printf("CM");a -=900;}
    if (a >=500){printf("D");a -=500;}
    if (a >=400){printf("CD");a -=400;}
    while (a >=100){printf("C");a -=100;}
    if (a >=90){printf("XC");a -=90;}
    if (a >=50){printf("L");a -=50;}
    if (a >=40){printf("XL");a -=40;}
    while(a >=10){printf("x");a -=10;}
    if (a >=9){printf("IX");a -=9;}
    if (a >=5){printf("V");a -=5;}
    if (a >=4){printf("IV");a -=4;}
    while (a >=1){printf("I");a -=1;}
   
    printf ("\n\n\n");system("pause");
    
    return 0;
}

