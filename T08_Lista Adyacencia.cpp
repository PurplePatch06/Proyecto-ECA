//Haciendo uso de una matriz dinamica captura de n alumnos ICI´s su promedio semestral que llevan hasta el momento, despues de capturar en el codigo
//realiza lo necesario para indicar quien o quienes estan sobre el promedio general
#include <iostream>
#include <vector>
using namespace std;

void agregar(vector<vector<int> >&vec,int x){
	int sem=0,cal=0;
	cout<<"Dime en que semestre esta el alumno: "<<1+x<<endl;
	cin>>sem;
	if(sem<=1){
		cout<<"Imposible calcular promedio semestral\n";
		return;
	}
		cout<<"\nDame "<<sem-1<<" calificaciones separadas por enter: "<<endl;
		for(int i=0;i<sem-1;i++){
		cin>>cal;
		vec[x].push_back(cal);
		}
	
}
float promt(vector<vector<int> >&vec){
	float prom,cont;
	for (int i = 0; i < vec.size(); i++) {

        for (int j = 0; j < vec[i].size(); j++) {

            prom+= vec[i][j];
            cont++;

        }
    }
    prom=(prom/cont);
    cout<<"\nPromedio total:"<<prom;
    return prom;
	
}


void imprimir(vector<vector<int> >& vec) {

    for (int i = 0; i < vec.size(); i++) {

        cout << "Alumno " << 1+i << ": ";

        for (int j = 0; j < vec[i].size(); j++) {

            cout << vec[i][j] << " ";
        }

        cout << endl;
    }

}

void final(float prom, vector<vector<int> >& vec){
	float promal=0,cont=0;
	for (int i = 0; i < vec.size(); i++) {
		promal=0;
		cont=0;
	        for (int j = 0; j < vec[i].size(); j++) {
	
	            promal+= vec[i][j];
	            cont++;
	
	        }
	        
        promal=(promal/cont);
        
        if(promal>=prom){
        	cout<<"Alumno "<<1+i<<" con un promedio de: "<<promal<<endl;
		}
    }
}

int main(){
	int al;
	float prom;
	cout<<"Dime cuantos alumnos hay: ";
	cin>>al;
	vector<vector<int> > vec(al);
	for(int i=0; i<al;i++){
		agregar(vec,i);
		cout<<endl;
	}
	
	system("cls");
	cout<<"\n\nCalificacion por semestre cursado de alumnos\n";
	imprimir(vec);
	cout<<endl<<endl;
	prom=promt(vec);
	
	cout<<"\n\nAlumnos con calificacion promedio por encima del promedio total"<<endl<<endl;
	final(prom,vec);
   system("pause");
}
