#include<iostream>
using namespace std;

int main(){
    int opcion = 0; int retiro = 0; int saldo = 500; int deposito = 0; char repetir = 'h';
    do{
        cout<<"Bienvenido usuario, que desea realizar: "<<endl;
        cout<<"1) Retirar Efectivo"<<endl;
        cout<<"2) Preguntar Saldo"<<endl;
        cout<<"3) Realizar un Deposito"<<endl;
        cin>>opcion;
        
        switch (opcion){
               case 1:
                    cout<<"Ingresa la cantidad a retirar"<<endl;
                    cin>>retiro;
                    if(retiro > saldo){
                              cout<<"Error, intenta retirar una cantidad que ni posee"<<endl;
                              }
                     else{
                          saldo = saldo - retiro;
                          cout<<"Su saldo ahora es: "<<saldo<<"$"<<endl;
                          }         
                break;
              case 2:
                    cout<<"Su saldo  es: "<<saldo<<"$"<<endl;
                break;
              case 3:
                    cout<<"Ingresa la cantidad a Depositar"<<endl;
                    cin>>deposito;
                     saldo = saldo + deposito;
                          cout<<"Su saldo ahora es: "<<saldo<<"$"<<endl;
                                   
               }
    cout<<"Desea realizar otro movimiento a su cuenta(Y/N): ";
    cin>>repetir;
    }while(repetir == 'Y');
}
