#include<iostream>
using namespace std;

int main(){
float a=0; float b=0; float suma=0; float resta=0; float division=0; float multiplicacion=0; int opcion=1; char repetir = 'h';



do{

cout<<"Ingrese dos numeros (a y b)"<<endl;
cin>>a; cin>>b;

cout<<"Que operacion hara?: "<<endl;
cout<<"1) Suma"<<endl;
cout<<"2) Resta"<<endl;
cout<<"3) Multiplicacion"<<endl;
cout<<"4) Division"<<endl;
cin>>opcion;

switch(opcion){

case 1: 
	suma= a + b;
	cout<<"Su suma es: "<<suma<<endl;
	break;

case 2: 
	resta= a - b;
	cout<<"Su resta es: "<<resta<<endl;
	break;

case 3:
	multiplicacion= a * b;
	cout<<"Su multiplicacion es: "<<multiplicacion<<endl;
	break;
	
	case 4:
	if(b == 0){
	cout<<"Math error"<<endl;
	}
	else{	
	division= a / b;
	cout<<"Su division es: "<<division<<endl;	
	}
	break;
		

} cout<<"Desea volver a hacer una operacion (Y/N)?"<<endl;
cin>>repetir;
}while (repetir == 'Y');
}
