 #include <iostream>
using namespace std;
main(){
	int paiza[15];
	string gallina [6];
	int indice;
	cout<<"Ingrese los eleemntos del vector\n";
	for (int i=0;i<=5;i++){
		cin>>paiza[i];

	}
	for (indice<-0;indice<=5;indice++){
	cout<<"voy en: "<<paiza[indice]<<endl;
	}
	cout<<"Ingrese los elementos del vector";
	for (int i=0;i<=5;i++){
		cin>>gallina[i];
	}
	for (int i=0;i<=5;i++){
		cout<<"la palabra es:  "<<gallina[i]<<endl;
	}	
}
