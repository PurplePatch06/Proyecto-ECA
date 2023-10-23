#include <iostream>
#include <string>
using namespace std;

int main (){
	int mat[6][6]={
	{0,0,0,1,1,0},//A
	{0,0,0,0,0,0},//B
	{0,0,0,0,0,1},//C
	{1,1,1,0,0,0},//D
	{0,1,1,0,0,1},//E
	{0,0,0,0,1,0}// F
	};
	//__________________________________________Declaracion de Variables
	string laux="",letras[6]={"A","B","C","D","E","F"};
	
	int faux[6],i,j,k,cont=0,suma[6],contdos=0,sumac[6];
	//__________________________________________Ponemos 1 en la diagonal Principal
	for(i=0;i<6;i++){
		for(j=0;j<6;j++){
			if(j==i){
				mat[i][j]=1;
			}
		}
	}
	
	for(i=0;i<6;i++){
		for (int a=0;a<3;a++){//__________________No se como detectar los unos que se agregaron, tons damos 3 vueltas para estar seguros ^-^
		for(j=0;j<6;j++){
				
				if(j!=i){//_______________________Toda la fila excepto la diagonal principal
				
					if(mat[i][j]==1){//___________Cuando haye el primer 1
						
						for(k=0;k<6;k++){//_______Recorrer columnas de la segunda matriz
							
							if(mat[j][k]==1){//___Si hay un uno en la fila detectada, lo asigna a la fila actual
							
							mat[i][k]=mat[j][k];
							
							}
						}
						
					}
				}
			}
		}
	}
	
	for(i=0;i<6;i++){
		cont=0;
		contdos=0;
		for(j=0;j<6;j++){
			
			cont+=mat[i][j];						
			contdos+=mat[j][i];
		}
		suma[i]=cont;				
		sumac[i]=contdos;
	}

	//_________________________________________Intercambia las filas
	for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (suma[j] < suma[j + 1]) {
                swap(mat[j], mat[j + 1]);
                swap(suma[j], suma[j + 1]);
                swap(letras[j], letras[j + 1]);
            }
        }
    }
    
    //_________________________________________Intercambia las Columnas
	for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (sumac[j] > sumac[j + 1]) {
            	for (int k = 0; k < 6; k++) {
                    swap(mat[k][j], mat[k][j + 1]);
                }
                swap(sumac[j], sumac[j + 1]);
            }
        }
    }
	
	cout<<"\tMatriz Conexa\n\n\t";//___________Imprimimos el titulo y las letras horizontales
	for(i=0;i<6;i++){
		cout<<letras[i]<<" ";
		
	}
		cout<<"\n\t";
	for(i=0;i<6;i++){//___________Imprimimos la suma de unos por columna
		cout<<sumac[i]<<" ";
		
	}
	cout<<endl;
	
	for(i=0;i<6;i++){//___________Imprimimos el resto de la tabla con sus respectivas letras y sumas
		cout<<"\n"<<letras[i]<<"  "<<suma[i]<<"\t";
		for(j=0;j<6;j++){
			
				cout<<mat[i][j]<<" ";
		}
		
	}
	return 0;
}











































//Y el Gael Guzman Solis es puto
