//Con ciclo for genere las tablas impar hasta 9
#include <iostream>
using namespace std;
main(){
			int num1, num2,num3,res;
		for (num1=1; num1<=10;  num1=num1+2){
			for (num2=1;num2<=10;num2=num2+1)
			{
					num3=num1*num2;
					cout<<"el resutado de\n"<<num1<<"\npor\n"<<num2<<"\nes"<<num3;
					cout<<endl<<endl;

					cout<<endl<<endl;
			}
			
		cout<<"\nprograma finalizado";				
		}
}
