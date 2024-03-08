//Con estructura if pedir una contraseña, si la contraseña es correcta imprima mensaje correcto sino incorrecto
#include <iostream>
using namespace std;
main(){
	int contra;
	cout<<"Digite su contraseña\n";
	cin>>contra;
		if (contra == 123){
			cout<<"Correcto";
		}
		else{
			cout<<"Incorrecto";
		}
}
