//Para fines de este programa usaremos numeros en vez de letras/
//Modificado 2545y67ftyuig
#include <iostream>
#include <set>
#include <vector>
#include <queue>
#include <locale.h>

#define ins push_back

using namespace std;

int main(){
	setlocale(LC_ALL, "");//Para poder trabajar con acentos o ñ
    vector <vector<int> > grafo(7);
    //set<int> conjunto;
    queue<int> cola;
    int visita[7], i=0, elemento=0;
    bool busca;
    
    grafo[1].ins(4);
    grafo[2].ins(5);
    grafo[3].ins(1);
    grafo[3].ins(2);
    grafo[4].ins(3);
    grafo[4].ins(0);
    grafo[4].ins(6);
    grafo[5].ins(4);
    
    //Mostramos las adyacencias del grafo usando vector de vectores
    cout<<"Con este Grafo se trabajará"<<endl;
     for (int i = 0; i < grafo.size(); i++) {
        cout  << i << ": ";
        for (int j = 0; j < grafo[i].size(); j++) {
            cout << grafo[i][j] << " ";
        }
        cout << endl;
    }
    
    //Nodo inicial 3
    cola.push(3);
    i=0;
    while(!cola.empty()){
        elemento = cola.front();
        cola.pop();
        busca=false;
        for(int r=0; r<i; r++){
            if (visita[r]==elemento)
                busca = true;
        }
        if (busca==false){
            visita[i++]=elemento;
            for (int adyacente : grafo[elemento]){
                busca=false;
                for(int r=0; r<i; r++){
                    if (visita[r]==adyacente)
                        busca = true;
                }
                if (busca==false)
                    cola.push(adyacente);
            }
        }
    }
    cout<<"Resultado de recorrido en anchura: "<<endl;
    for(int r=0; r<i; r++)
        cout<<visita[r]<<endl;
        
        system("pause");
    return 0;
}
