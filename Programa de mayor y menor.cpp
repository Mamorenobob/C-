 	#include<iostream>

using namespace std;
main ()
{
	int numero1,numero2,numero3;
	cout<<"programa para realizar operaciones basica\n";
	cout<<"el primero numero para la oprecion\n";
	cin>>numero1;
	cout<<"ingrese el segundo numero para la operacion\n";
	cin>>numero2;
	numero3=numero1+numero2;
	cout<<"\n\nel respuesta de: "<<numero1<<" + "<<numero2<<" es igual a: "<<numero3;
	numero3=numero1-numero2;
	cout<<"\n\nel respuesta de: "<<numero1<<" - "<<numero2<<" es igual a: "<<numero3;
	numero3=numero1*numero2;
	cout<<"\n\nel respuesta de: "<<numero1<<" * "<<numero2<<" es igual a: "<<numero3;
	numero3=numero1/numero2;
	cout<<"\n\nel respuesta de: "<<numero1<<" / "<<numero2<<" es igual a: "<<numero3;
	if (numero1<numero2)
		{
			cout<<"\n\nel numero "<<numero1<<" es menor que "<<numero2;
		}
	else 
	{
		cout<<"\n\nel numero"<<numero1<<" es mayor que"<<numero2;
	}
	if (numero1=numero2)
	{
		cout<<"\n\nlos numeros son iguales";
	}
	
	
	
	
	
	
	
}
