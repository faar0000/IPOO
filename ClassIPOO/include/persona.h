#ifndef PERSONA_H
#define PERSONA_H
#include "persona.h"
#include <iostream.h>


class persona
{
    public:
        persona();
        persona(string,string,int,string);
        void escrNombre();
        virtual ~persona();
    protected:
        string nombre;
        string apellido;
        int edad;
        string DNI;
    private:
};

#endif // PERSONA_H
