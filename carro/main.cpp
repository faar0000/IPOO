#include "include\carro.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main(){
    /*
    cout<<"Hello world"<<endl;
    carro A;
    A.modelo = "toyota";
    A.set_puertas(4);


    cout<<A.modelo<<endl;
    carro* B = new carro() ;
    B->modelo = "jhgj"
*/


    ofstream myfile;
    myfile.open ("pajero.txt");

    char *var = "inicio";
    int i = 0;
    while(true)
    {
        var++;
        cout<<var;

        if(i%100==0)
        {
        system("pause");
        }
        i++;
    }


    return 0;
}
