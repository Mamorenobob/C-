#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
main(){
	srand (time(NULL));
	int aleatorio, vector[20], numero,limon,fila,columna, temporal;
	for (int i=0;i<=20;i++){
		aleatorio=1+rand()%10;
		vector [i]= aleatorio;
	}
	cout<<"\n\n";
	for (limon=1;limon<=15;limon++){
		cout<<"En el indice : "<<limon<<" esta el numero "<< vector[limon]<<endl;
	}
	for (fila=1;fila<=15;fila++){
		for (columna=1;columna<=15;columna++){
			if (vector[columna]>vector[columna+1]){
				temporal=vector[columna];
				vector[columna]=vector[columna+1];
				vector[columna+1]=temporal;
			}
		}
	}
	cout<<"Los numeros ordenados quedaron de esta forma"<<endl;
	for(numero=1;numero<=15;numero++){
		cout<<"En el indice :["<<numero<<"] quedo el numero"<<vector[numero]<<endl;
	}
}
