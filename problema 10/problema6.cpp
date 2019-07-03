#include<string>
#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout<<"INGRESE NUMERO 1"<<endl;
    cin>>num1;

    cout<<"INGRESE NUMERO 2"<<endl;
    cin>>num2;

    cout<<"INGRESE NUMERO 3"<<endl;
    cin>>num3;

    if(num1 > num2 && num1 > num3){
        cout<<"numero mayor "<< num1<<endl;
        if(num2>num3){
            cout<<"numero menor "<<num3;
        }else{
            cout<<"numero menor "<<num2;
        }
    }

    if(num2 > num1 && num2 > num3){
        cout<<"numero mayor "<< num2<<endl;
        if(num1>num3){
            cout<<"El numnero menor es "<<num3;
        }else{
            cout<<"El numero menor es "<<num1;
        }
    }

    if(num3 > num1 && num3 > num2){
        cout<<"numero mayor "<< num3<<endl;
        if(num1<num2){
            cout<<"El numero menor es "<<num1;
        }else{
            cout<<"El numero menor es "<<num2;
        }
    }

}



