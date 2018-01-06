#include <iostream>
using namespace std;

void suma(void *a,void *b,int tamanoa,int tamanob){
    if(tamanoa == sizeof(int)and tamanob==sizeof(int)){
        int *pinta=(int*)a;
        int *pintb=(int*)b;
        (*pinta)=(*pinta)+(*pintb);}
    else if (tamanoa==sizeof(char)and tamanob==sizeof(char)){
        char *pchara=(char*)a;
        char *pcharb=(char*)b;
        (*pchara)=(*pchara)+(*pcharb);}}

void resta(void*a,void*b,int tamanoa,int tamanob){
    if(tamanoa == sizeof (int)and tamanob==sizeof(int)){
        int *pinta=(int*)a;
        int *pintb=(int*)b;
        (*pinta)=(*pinta)-(*pintb);}
    else if (tamanoa==sizeof(char)and tamanob==sizeof(char)){
        char *pchara=(char*)a;
        char *pcharb=(char*)b;
        (*pchara)=(*pchara)+(*pcharb);}}

void operacion(void*a,void*b,int tamanoa,int tamanob,void(*pfuncion)(void*,void*,int,int)){
    (*pfuncion)(a,b,tamanoa,tamanob);
}

int main(){
    /*int m,n;
    char a,b;
    m=1;
    n=4;
    a='a';
    b='b';
    suma(&m,&n,sizeof(m),sizeof(n));
    cout<<m<<endl;
    suma(&a,&n,sizeof(a),sizeof(b));
    cout<<a<<endl;
    return 0;
*/
    int m=4;
    int n=5;
    operacion(&m,&n,sizeof(m),sizeof(n),suma);
    cout<<m<<endl;
    return 0;
}
