#ifndef CLIENTE_H
#define CLIENTE_H


class cliente
{
    public:
        void setSueldo(float);
        void getcliente();
        cliente(string,string,float,string)

        virtual ~cliente();
    protected:
    private:
        int RLK;
        string empresa;
        float sueldo;
};

#endif // CLIENTE_H
