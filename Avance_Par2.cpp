#include <iostream>
#include <vector>
#include<cstdlib>
using namespace std;
class grafo {
	public:
		int nodo, arista;
		
void conexo();
void m_adyacencia();
void l_adyacencia();
void anchura();
void dijkstra();

grafo(int, int);
};

grafo::grafo(int n, int a){
	nodo =n;
	arista =a;
}

int main(){
	
	
	return 0;
}
