#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "HollowSquare.h"
#include "EqTriangle.h"
#include <iostream>

using namespace std;

class Menu{  
private:
    Shape* s = nullptr;
    int opcion, opcionC, opcionT;

public:
    void menu(){
        system("cls");
        cout << "FIGURAS" << endl << endl;
        cout << "1. Cuadrado" << endl;
        cout << "2. Triangulo" << endl;
        cout << "3. Rectangulo" << endl;
        cout << "Inserte el numero de la instruccion que desea realizar: ";
    }
            
    Shape* selection(int opcion){
        switch(opcion){
            case 1:
                system("cls");
                cout << "1. Cuadrado Vacio" << endl << "2. Cuadrado Relleno" << endl;
                cout << "Seleccione el tipo de cuadrado que desea: ";
                cin >> opcionC;
                while(opcionC != 1 && opcionC != 2){
                    cout << "Opcion invalida vuelva a ingresar: ";
                    cin >> opcionC;
                }
                switch(opcionC){
                    case 1:
                        s = new HollowSquare();
                    break;
                    case 2:
                        s = new Square();
                    break;
                }
            break;
            case 2:
                system("cls");
                cout << "1. Triangulo Equilatero" << endl << "2. Triangulo Rectangulo" << endl;
                cout << "Seleccione el tipo de triangulo que desea: ";
                cin >> opcionT;
                while(opcionT != 1 && opcionT != 2){
                    cout << "Opcion invalida vuelva a ingresar: ";
                    cin >> opcionT;
                }
                switch(opcionT){
                    case 1:
                        s = new EqTriangle();
                    break;
                    case 2:
                        s = new Triangle();
                    break;
                }   
            break;
            case 3:
                s = new Rectangle();
            break;
        }
        return s;
    }

    int finish(){
        int select;

        cout << endl << "1. Volver al menu" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: " << endl;
        cin >> select;

        while(select != 1 && select != 0) {
            cout << "Opcion invalida, vuelva a ingresar: " << endl;
            cin >> select;
        }
        return select;
    }
};