
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int op, numero, contador, i;


	cout<<"************************************************************"<<endl;
	cout<<"|  Programa Calculadora de tabla de multiplicar y dividir  |"<<endl;
	cout<<"************************************************************"<<endl<<endl;


	
	cout<<"Ingresa del numero de la opcion "<<endl;
	cout<<"1.  Para mostrar la tabla de Multiplicar de un numero "<<endl;
	cout<<"2.  Para mostrar la tabla de Dividir de un numero "<<endl;
	cin>>op;
	
	
	switch (op)	
	{
		case 1: 
				
					cout<<"Ingresa el numero que quieres que se calcule su tabla de multiplicar"<<endl;
					cin>>numero;
					cout<<endl<<"La tabla de multiplicar del numero "<<numero<<" es:"<<endl<<endl;
					
					
					for(int i=1;i <= 10; i++){
						
						cout<<numero<<" x "<< i<< " = "<< numero*i<<endl;
						
					}
					
					cout<<endl;
				break;

		case 2:
	
					cout<<"Ingresa el numero para calcularle su tabla de division"<<endl;
					cin>>numero;
	
					contador=0;
					i=1;
					
					cout<<"La tabla de dividir del numero "<<numero<<" es: "<<endl<<endl;
					
					while (i <= 10) {
						cout<<contador<<" / "<<numero<<" = "<<contador/numero<<endl;
						contador=contador+numero;
						i++;
					}
					cout<<endl;
				break;
					
				
						
		default: 
		cout<<"Error, ingrese una opcion de las anteriores "<<endl;	
	}

	system("pause");
	return 0;
}







