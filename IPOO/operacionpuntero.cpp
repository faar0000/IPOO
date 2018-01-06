#include <iostream>
using namespace std;
int suma(int a,int b){
    return(a+b);
}
int resta(int a,int b){
    return(a-b);
}
int operacion(int a,int b,int (*pfuncion)(int,int)){
    int r;
    r=(*pfuncion)(a,b);
    return r;
}
int main(){
    int m,n;
    int (*sum)(int,int)=suma;
    int (*res)(int,int)=resta;
    m=operacion(5,7,sum);
    n=operacion(m,2,res);
    cout<<n<<endl;
    return 0;
}
