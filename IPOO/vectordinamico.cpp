#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <iostream>
using namespace std;

void aleatorio(int *vector, int N);

int main(){
    int i,j,k;
    int N=10;
    int *vector;

    vector =(int*)malloc(N*sizeof(int)); //Malloc reserva memoria
    if(vector == NULL){
        cout<<"No se pudo reservar memoria "<<endl;
    }
    else {
        aleatorio(vector,N);

        for(i=0;i<N;i++){
            j=i+1;
            while(j<N){
                if(*(vector+1)==*(vector+j)){
                    for(k = j;k+1<N;k++){
                        *(vector+k)=*(vector+k+1);
                    }
                    N--;
                }
                else{
                    j++;
                }
            }
         vector = (int*)realloc(vector,N*sizeof(int));
         if(vector==NULL){
            cout<< "No se pudo reservar memoria" <<endl;
         }
         else{
            for (i=0 ;i<=N ;i++){
                cout<<*(vector+i)<<endl;
            }
         }
        }
    }
}

void aleatorio(int *vector, int N){
    int i;
    srand(time(NULL));

    for (i=0;i<N;i++){
        *(vector+1) = rand() % 3;
        cout<<"%i",(*(vector+1));
    }
    cout<<("\n");
}
