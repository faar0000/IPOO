#include <iostream>
using namespace std;

void incremento(void* puntero,int tamano)
{
        if (tamano==sizeof (int))
        {
            int *pint=(int *)puntero;
                (*pint)++;
        }
        else if(tamano==sizeof(char))
        {
            char *pchar=(char*)puntero;
                (*pchar)++;
        }
}
void suma(void *a,void *b,int tamanoa,int tamanob)
{
	if(tamanoa==sizeof(int) and tamanob==sizeof(int))
	{
		int *pinta=(int*)a;
		int *pintb=(int*)b;
		(*pinta)=(*pinta)+(*pintb);
	}
	else if (tamanoa==sizeof(char)and tamanob==sizeof(char))
	{
		char *pchara=(char*)a;
		char *pcharb=(char*)b;
		(*pchara)=(*pchara)+(*pcharb);
	}
	
}

void resta(void *a,void *b,int tamanoa, int tamanob)
{
	if (tamanoa==sizeof(int) and tamanob==sizeof(int))
	{
		int *pinta=(int*)a;
		int *pintb=(int*)b;
		(*pinta)=(*pinta)-(*pintb);
		
	}
	else if(tamanoa==sizeof(char) and tamanob==sizeof(char))
	{
		char *pchara=(char*)a;
		char *pcharb=(char*)b;
		(*pchara)=(*pchara)-(*pcharb);
	}
}


int main()
{
    int m,n;
    char a,b;
    m=1;
    n=4;
    a='a';
    b='b';
    suma(&m,&n,sizeof(m),sizeof(n));
    cout<<m<<endl;
    suma(&a,&n,sizeof(a),sizeof(n));
    cout<<a<<endl;
    return 0;
    
}

