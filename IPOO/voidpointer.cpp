#include <iostream>
 using namespace std;

 void incrementa(void *puntero, int tamano){
    if(tamano == sizeof(int)){
        int *pint = (int*)puntero;
            (*pint)++;

    } else if(tamano == sizeof(char)){
        char *pchar = (char*) puntero;
            (*pchar)++;

    }
 }

int main(){
    int a=500;
    char b= 'c';
    incrementa(&a,sizeof(a));
    incrementa(&b,sizeof(b));
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}
