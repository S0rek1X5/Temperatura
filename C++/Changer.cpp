#include<iostream>
using namespace std;
int main(){
	float fah, cel, kel;
	int opcion,opc;
	cout<<"------BIENVENIDO------\n"<<endl;
	do{
		cout<<"Que conversion desea hacer?\nCelsius a fahrenheit -> 1\nCelsius a kelvin -> 2\nFahrenheit a celsius -> 3\nFahrenheit a kelvin -> 4\nKelvin a celsius -> 5\nKelvin a fahrenheit -> 6\n:";cin>>opcion;
		if(opcion==1){
			cout<<"\nIntroduzca su grado en Celsius\n: ";cin>>cel;
			fah=(cel*9/5)+32;
			cout<<"la temperatura en Fahrenheit es\n: "<<fah;
		}
		else if(opcion==2){
			cout<<"\nIntroduzca su grado en Celsius\n: ";cin>>cel;
			kel=cel+273.15;
			cout<<"la temperatura en Kelvin es\n: "<<kel;
		}
		else if(opcion==3){
			cout<<"\nIntroduzca grado en Fahrenheit: ";cin>>fah;
			cel = 5*(fah-32) /9;
			cout<<"\nLa temperatura en Celsius es: "<<cel;
		}
		else if(opcion==4){
			cout<<"\nIntroduzca grado en Fahrenheit\n: ";cin>>fah;
			kel=5*(fah-32)/9 + 273.15;
			cout<<"\nLa temperatura en Kelvin es\n: "<<kel;
		}
		else if(opcion==5){
			cout<<"\nIntroduzca su grado en Kelvin\n: ";cin>>kel;
			cel=kel-273.15;
			cout<<"\nLa temperatura en Celsius es\n: "<<cel;
		}
		else if(opcion==6){
			cout<<"\nIntroduzca su grado en Kelvin\n: ";cin>>kel;
			fah=(kel-273.15)*9/5+32;
			cout<<"\nLa temperatura en Fahrenheit es\n: "<<fah;
		}
		cout<<"\nDigite 1 para HACER OTRA CONVERSION - 2 para SALIR: ";cin>>opc;
	}while(opc==1);
	return 0;
}
