//Con estructura if pedir una contraseņa, si la contraseņa es correcta imprima mensaje correcto sino incorrecto
#include <iostream>
using namespace std;
main(){
	int contra;
	cout<<"Digite su contraseņa\n";
	cin>>contra;
		if (contra == 123){
			cout<<"Correcto";
		}
		else{
			cout<<"Incorrecto";
		}
}
