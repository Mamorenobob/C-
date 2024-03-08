//Escribe un programa en C++ que realice la conversión de temperatura entre Celsius y Fahrenheit. El programa debe permitir al usuario elegir la dirección de la conversión (de Celsius a Fahrenheit o viceversa) y luego ingresar la temperatura en la escala seleccionada. Utiliza la fórmula de conversión adecuada:
#include <iostream>
using namespace std;
main(){
	int C,F,T,caso;
	char letra;
	cout<<"Programa con el cual se pueda cambiar de grados Celcius a fahrenheit y viceversa"<<endl;
	do{
		cout<<"Ingrese la temperatura"<<endl;
		cin>>F;
		cout<<"Ahora ingrese si quiere hacer la operacion de F ingrese 1, si quiere hacer la operacion de C ingrese 2"<<endl;
		cin>>caso;
			switch(caso){
				case 1:
					T=(F+32*9/5);
					cout<<"El resultado es: "<<T<<endl;
					
				break;
				case 2:
					T=(F-32*9/5);
					cout<<"El resultado es: "<<T<<endl;
				break;
			}
	cout<<"Desea volver a hacer la operacion? Digite S para volver a empezar de lo contrario digite otra letra"<<endl;
	cin>>letra;	
	}

	while(letra=='S');

}

