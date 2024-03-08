#include <iostream>
using namespace std;
main (){
	int caso,cont=1,c,contador=1;
	char letra;
	cout<<"Buenas tardes"<<endl;
	do{
	
	cout<<"Eliga uno de los siguientes casos";
	cin>>caso;
	switch (caso){
		case 1:
			cout<<"Caso que lea dos veces"<<endl;
			do{
				cout<<"Programador\n";
				cont=cont+1;
			}
			while(cont<3);

		break;
		case 2:
			cout<<"Caso que lea las veces que uno quiera"<<endl;
			cin>>c;
			do{
				cout<<"Programador\n";
				contador=contador+1;
			}
			while (contador<=c);
		break;
		default:
		break;
	}
	cout<<"Desea continuar? Presione S para seguir de lo contrario presione cualquier tecla diferente"<<endl;
	cin>>letra;
	}
	while(letra=='S');
	
}
