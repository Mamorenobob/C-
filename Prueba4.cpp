//Con estructura if pedir una contrase�a, si la contrase�a es correcta imprima mensaje correcto sino incorrecto
#include <iostream>
using namespace std;
main(){
	int contra;
	cout<<"Digite su contrase�a\n";
	cin>>contra;
		if (contra == 123){
			cout<<"Correcto";
		}
		else{
			cout<<"Incorrecto";
		}
}
