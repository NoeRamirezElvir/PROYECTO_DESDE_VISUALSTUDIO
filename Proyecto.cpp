#include <iostream>
#include <iomanip>
#include <clocale>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>


using namespace std;
int NumR() {
    srand(time(0));
    int num = 1 + rand() % 1000;
    return num;
}

int main()
{
    setlocale(LC_ALL, "spanish");
    SetConsoleCP(1252);
    int numeroGenerado,numAD;
    numeroGenerado = NumR();

    cout << "- - - - - - - Adivina el numero - - - - - - -" << endl;
    
    //cout << "Numero random: "<< numeroGenerado << endl;               //Mostrar el numero generado
    

    do
    {
        cout << "Ingrese un numero: ";
        cin >> numAD;
        if (numAD < numeroGenerado)
        {
            cout << "-------Demasiado Bajo-------" << endl;
        }
        else
        {
            if (numAD > numeroGenerado)
            {
                cout << "-------Demasiado Alto-------" << endl;
            }
        }
    } while (numAD != numeroGenerado);
    cout << "............................................." << endl;
    cout << ":  ¡ EXCELENTE !, ¡ ADIVINASTE EL NUMERO !  :" << endl;
    cout << "............................................." << endl;
    system("pause");
    return 0;
}