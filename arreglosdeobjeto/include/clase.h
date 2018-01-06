#ifndef CLASE_H
#define CLASE_H
#include <string>


class clase
{
    private:
        string producto;
        unsigned int precio;
    public:
        clase();
        void Set_producto(string);
        void Set_precio(unsigned int);
        string Get_producto();
        unsigned int Get_precio();
        virtual ~clase();
};

#endif // CLASE_H
