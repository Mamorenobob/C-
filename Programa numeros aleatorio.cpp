#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
main(){
	srand(time(NULL));
	int aleatorio=0;cout<<endl<<endl;
	cout<<"Programa para ingresar 10 numeros aleatorios=\n";
	for (int i=1;i<11;i++){
		aleatorio=rand()%11;
		cout<<"El numero "<<i<<" generado es: "<<aleatorio<<endl;
		
	}
	getch();
}
