//Repetir 2 veces todos los puntos anteriors con do-while
#include <iostream>
using namespace std;
main(){
		int num=1, caso, numero=-5, co=0, num1, num2,num3,res,contra;

		do{
		cout<<"A cual quiere ir?";
		cin>>caso;
			switch (caso){

				case 1:
					cout<<"Programa para determinar numeros del -5 al 5"<<endl;
					while (numero<=5)
					{
					cout<<"voy en :"<<numero<<endl;
					numero++;
				}
				break;
				case 2:
					cout<<"Programa para los numeros pares hasta 10"<<endl;
					do{
						cout<<co<<endl;
						co=co+2;
					}
					while (co<=10);	
					
									
				break;
				case 3:
					cout<<"Programa para las tablas impares hasta el 9"<<endl;
					for (num1=1; num1<=10;  num1=num1+2){
					for (num2=1;num2<=10;num2=num2+1)
					{
							num3=num1*num2;
							cout<<"el resutado de "<<num1<<" por "<<num2<<" es "<<num3;
							cout<<endl<<endl;
		
							cout<<endl<<endl;
					}
			
				
		}
				break;
				case 4:
					cout<<"Programa para digitar la contraseña"<<endl;
					cout<<"Digite su contraseña\n";
					cin>>contra;
						if (contra == 123){
							cout<<"Correcto";
						}
						else{
							cout<<"Incorrecto";
						}
				break; 

		}
		
		num++;
		}

	while (num<3);
	cout<<"\nprograma finalizado\n";

}
