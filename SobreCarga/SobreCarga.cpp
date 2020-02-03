#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

// estructura del número
struct Complejo{
	float real, imaginaria;
}uno, dos;

//prototipos de funciones
void pedirDatos();
void muestra(Complejo, char);

//prototipo de operadores
Complejo operator + (Complejo, Complejo);
Complejo operator - (Complejo, Complejo);
Complejo operator * (Complejo, Complejo);
Complejo operator / (Complejo, Complejo);

//funcion main
int main(){
	
	pedirDatos();
	Complejo x = uno + dos;
	Complejo z = uno - dos;
	Complejo v = uno * dos;
	Complejo n = uno / dos;
	muestra(x, '+');
	muestra(z, '-');
	muestra(v, '*');
	muestra(n, '/');
	
	getch();
	return 0;
};

//cuerpo de las funciones declaradas
void pedirDatos(){
	cout<<"Digite los datos del primer numero complejo: "<<endl;
	cout<<"Parte Real: "; cin>>uno.real;
	cout<<"Parete imaginaria: :"; cin>>uno.imaginaria;
	
	cout<<"\n Digite los datos del segundo numero complejo:  "<<endl;
	cout<<"Parte Real: "; cin>>dos.real;
	cout<<"Parete imaginaria: :"; cin>>dos.imaginaria;
}


void muestra(Complejo actual, char operacion){
	if( operacion == '+' ){
		cout<<"\n Resultado de la suma: "<<actual.real<<","<<actual.imaginaria<<endl;
	}
	if( operacion == '-' ){
		cout<<"\n Resultado de la resta: "<<actual.real<<","<<actual.imaginaria<<endl;
	}
	if( operacion == '*' ){
		cout<<"\n Resultado de la multiplicacion: "<<actual.real<<","<<actual.imaginaria<<endl;
	}
	if( operacion == '/' ){
		cout<<"\n Resultado de la division: "<<actual.real<<","<<actual.imaginaria<<endl;
	}
}

//cuerpo de los operadores
Complejo operator + (Complejo uno, Complejo dos){
	uno.real += dos.real;
	uno.imaginaria += dos.imaginaria;
	
	return uno;
};
Complejo operator - (Complejo uno, Complejo dos){
	uno.real -= dos.real;
	uno.imaginaria -= dos.imaginaria;
	
	return uno;
};
Complejo operator * (Complejo uno, Complejo dos){
	uno.real *= dos.real;
	uno.imaginaria *= dos.imaginaria;
	
	return uno;
};
Complejo operator / (Complejo uno, Complejo dos){
	uno.real /= dos.real;
	uno.imaginaria /= dos.imaginaria;
	
	return uno;
};



