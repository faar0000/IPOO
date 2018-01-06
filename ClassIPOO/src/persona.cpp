#include "persona.h"
#include "cliente.h"
#include <iostream.h>
using namespace std;

persona::persona(nombre,apellidos,edad,DNI)
{
    this->nombre=" "
    this->apellido=" "
    this->edad=0
    this->DNI=0
}

persona::persona(string nombre,string apellidos,int edad,int DNI)
{
    //ctor
}
void persona::escrNombre(){
cout<<nombre<<" "<<apellido<<endl;
}
persona::~persona()
{
    //dtor
}
