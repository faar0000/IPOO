#include "grafo.h"

grafo::grafo()
{

}
void grafo::nueva_matriz(int tam1,int tam2){

    for(i=0;i<tam1;i++){
            for(j=0;j<tam2;j++){
                    a[i][j]=0;
            }
    }
}

void grafo::llenar_matriz(){
    int valor=0;
    for(i=0;i<tam1;i++){
            for(j=0;j<tam2;j++){
                    cout<<"Ingrese 0 o 1"<<endl;
                    cin>>valor;
                    a[i][j]=valor;
            }
    }
}

void grafo::imprimir_matriz(){
    for (i=0;i<tam1;i++){
        for(j=0;j<tam2;j++){
            cout<<a[i][j];
        }
    }
}
grafo::~grafo()
{
    //dtor
}
