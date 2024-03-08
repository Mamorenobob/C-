#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
void suma();
void resta();
void multiplicacion();
void division();
void raiz();
main(){
	int opcion;
	char letra;
	do{
		system ("cls");
		cout<<"\n\n\t\tmenu de opciones"<<endl;
		cout<<"******************************"<<endl;
		cout<<"\n1 suma de dos numeros"<<endl;
		cout<<"\n2 resta de dos numeros"<<endl;
		cout<<"\n3 multiplicacion de dos numeros"<<endl;
		cout<<"\n4 division de dos numeros"<<endl;
		cout<<"\n5 raiz de dos numeros"<<endl;
		cin>>opcion;
		int n1,n2;
		float res;

		switch(opcion){
			case 1:suma();
			break;
			case 2:resta();
			break;
			case 3:multiplicacion();
			break;
			case 4:division();
			break;
			case 5:raiz();
			break;
			default:cout<<"No";
			break;
		}
		cout<<"Desea continuar? digite S para seguir de lo contrario digite otra tecla";
		cin>>letra;
	}
	
	while(letra=='S');
}
void suma(){
	int n1,n2;
	float res;
	cout<<"\n\tI Ingrese el primer numero: "<<endl;
	cin>>n1;
		cout<<"\n\tI Ingrese el segundo numero: "<<endl;
	cin>>n2;
	cout<<"******************************"<<endl;
	res=n1+n2;
	cout<<"\n\tEl resultado de la operacion es: "<<res<<endl;
}
void resta(){
	int n1,n2;
	float res;
	cout<<"\n\tI Ingrese el primer numero: "<<endl;
	cin>>n1;
		cout<<"\n\tI Ingrese el segundo numero: "<<endl;
	cin>>n2;
	cout<<"******************************"<<endl;
	res=n1-n2;
	cout<<"\n\tEl resultado de la operacion es: "<<res<<endl;
}
void multiplicacion(){
	int n1,n2;
	float res;
	cout<<"\n\tI Ingrese el primer numero: "<<endl;
	cin>>n1;
		cout<<"\n\tI Ingrese el segundo numero: "<<endl;
	cin>>n2;
	cout<<"******************************"<<endl;
	res=n1*n2;
	cout<<"\n\tEl resultado de la operacion es: "<<res<<endl;
}
void division(){
	int n1,n2,contador;
	float res;
	cout<<"\n\tI Ingrese el primer numero: "<<endl;
	cin>>n1;
		cout<<"\n\tIngrese el segundo numero: "<<endl;
	cin>>n2;
	cout<<"******************************"<<endl;
	do{
		if (n2 ==0){
			cout<<"No se puede dividir entre 0\n";
			cout<<"Vuelva a ingresar el dato\n";
			cin>>n2;
			res=n1/n2;
			cout<<"\n\tEl resultado de la operacion es: "<<res<<endl;			
		}
		else{
			cout<<"\n\tEl resultado de la operacion es: "<<res<<endl;	
		}
		contador=contador+1;
	}

	while (contador >=0);
}
void raiz(){
	double raiz, numero;
	cout<<"Digite el numero"<<endl;
	cin>>numero;
	raiz=sqrt(numero);
	cout<<"El resultado de la operacion es: "<<raiz;
}
