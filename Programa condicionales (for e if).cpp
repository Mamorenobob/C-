#include<iostream>
using namespace std;
	main(){
		int num1, num2, num3, a;
		cout<<"Ingrese el numero";
		cin>>a;
			for (num1=1; num1<=10;  num1=num1+1){		
	
				if (a == 2)
				{
				
					cout<<"tablas par\n";
						for (num2=2;num2<=10;num2=num2+2){
							num3=num1*num2;
							cout<<"el resutado de "<<num1<<" por "<<num2<<" es "<<num3;
							cout<<endl;

					}
				}
				else
				{				
					if (a==1){
					
						cout<<"tablas impar\n";
							for (num2=1;num2<=9;num2=num2+2){
							
								num3=num1*num2;
								cout<<"el resutado de "<<num1<<" por "<<num2<<" es "<<num3;
								cout<<endl;


							}
					}
				}
							
				
			}
	cout<<"programa finalizado";		
				
		}
