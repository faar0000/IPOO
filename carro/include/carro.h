#ifndef CARRO_H
#define CARRO_H
#include <string>
using namespace std;
class carro
{
    public:

        carro();
        string modelo;

    private:
        int n_puertas;
        int n_llantas;
        int posicionx;
        int posiciony;

    public:
        void set_puertas(int n_puertas);
};

#endif // CARRO_H
