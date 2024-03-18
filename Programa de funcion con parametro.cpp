#include <iostream>
using namespace std;
sumar (int x, int y){
	int resultado;
	resultado=x+y;
	return resultado;
	return x+y;
}
main(){
	int a,b;
	cout<<"Ingrese el primer numero: ";
	cin>>a;
	cout<<"Ingrese el segundo numero: ";
	cin>>b;
	cout<<"El resultado de la suma de: "<<a<<" + "<<b<<" es igual a: "<<sumar(a,b);
	
}
