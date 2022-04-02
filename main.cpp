#include <iostream>
#include "Menu.h"
#include "Canva.h"

using namespace std;

int main(){

    bool terminado = false;
    int opcion, select;

    Shape* s = nullptr;
    Canva c;
    Menu a;
    
    while(terminado == false) {
        a.menu();
        cin >> opcion;
        while(opcion<0 || opcion>3){
            cout << "Opcion invalida vuelva a ingresar: ";
            cin >> opcion;
        }
        c.printShape(a.selection(opcion));
        select = a.finish();
        if(select == 0){
            terminado = true;
        }
    } 
    return 1;
}