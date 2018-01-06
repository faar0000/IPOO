#include "cuenta.h"
#include <iostream>
#include <math.h>
#include<string>

using namespace std;

cuenta::cuenta()
{
    this->nombre=" ";
    this->saldo=0;
}
cuenta::cuenta(string nombre,float saldo)
{
    this->nombre=nombre;
    this->saldo=saldo;
}

void cuenta::imprimeCuenta()
{
    cout<<"nombre"<<nombre<<endl;
    cout<<"saldo"<<saldo<<endl;
}

int main()
{
	cuenta micuenta("juan",100);
	micuenta.imprimeCuenta();
	
	return 0;
	
}




cuenta::~cuenta()
{
    //dtor
}

