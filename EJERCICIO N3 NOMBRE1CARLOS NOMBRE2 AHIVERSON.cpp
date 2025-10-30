#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main() {
    srand(time(NULL));
    int rangoMin = 0; int rangoMax = 0; int numeroAleatorio = 0;
    int i = 0; int intentos = 5; int numeroAdivinado = 0;
    char repetir = 'k';
    
    do{
        i = 0;
        cout<<"Bienvenido al juego de adivinanza de numeros"<<endl;
        cout<<"Ingresa el rango minimo y el rango maximo para empezar el juego: ";
        cin>>rangoMin;cin>>rangoMax;
        numeroAleatorio = rangoMin + (rand() % rangoMax);
        while(i < intentos){
            

            cout<<"Ingresa el numero:  "<<endl;
            cin>>numeroAdivinado;
            if(i == 4){
                cout<<"Perdiste, se te acabaron los intentos "<<endl;
                cout<<"El numero a adivinar era: "<<numeroAleatorio<<endl;
                break;
        
            }
            else if(numeroAdivinado < numeroAleatorio && i<intentos){
                cout<<"Error, el numero "<<numeroAdivinado<<" es menor que el numero a adivinar."<<endl;
                i++;
            }
            else if(numeroAdivinado > numeroAleatorio){
                cout<<"Error, el numero "<<numeroAdivinado<<" es mayor que el numero a adivinar."<<endl;
                i++;
            }
            else if(numeroAdivinado == numeroAleatorio){
                cout<<"Felicidades ganaste, el numero era "<<numeroAleatorio<<endl;
                break;
            }
                        if(numeroAdivinado == numeroAleatorio){
                cout<<"Felicidades ganaste, el numero era "<<numeroAleatorio<<endl;
                break;
            }

        }
        
        cout<<"Desea jugar de nuevo(Y/N): ";
    cin>>repetir;
    }while(repetir == 'Y');
}
