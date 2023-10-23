/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int cantNodos, cantAristas;
    short nodo1, nodo2;
   //1. Leer cantidad nodos
    cout<<"Dame la cantidad de nodos: ";
    cin>>cantNodos;
   //2. Crear matriz adyacencia
    short matAd[cantNodos][cantNodos];
   //2.1. Igualar 0
    for (int r=0; r<cantNodos; r++){
        for (int c=0; c<cantNodos; c++){
            matAd[r][c]=0;
        }
    }
   //3. Leer aristas, crear grafo
    cout<<"Dame la cantidad de aristas: ";
    cin>>cantAristas;
    for (int i=1; i<=cantAristas; i++){
        cout<<"Dame los dos nodos: ";
        cin>>nodo1>>nodo2;
        matAd[nodo1][nodo2]=1;
        matAd[nodo2][nodo1]=1;
    }
   //4. Imprimir la matriz
    for (int r=0; r<cantNodos; r++){
        for (int c=0; c<cantNodos; c++){
            cout<<matAd[r][c]<<" ";
        }
        cout<<endl;
    }
    //5. Imprimir el grafo 
    for (int r=0; r<cantNodos; r++){
        for (int c=r; c<cantNodos; c++){
            if (matAd[r][c] == 1){
                cout<<"("<<r<<", "<<c<<"), ";
            }
        }
    }
       system("pause");
    return 0;
}

