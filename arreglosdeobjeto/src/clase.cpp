#include "clase.h"

clase::clase()
{
    producto="";
    precio=0;
}

void clase::Set_producto(string P)
{
    producto=P;
}
void clase::Set_precio(unsigned int P)
{
    precio=P;
}
string clase::Get_producto()
{

    return producto;
}
unsigned int clase::Get_precio()
{
    return precio;
}








clase::~clase()
{

}
