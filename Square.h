#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Square:public Shape{
public:
    Square(){
        cout << "Se crea cuadrado" << endl << endl;
    }
    ~Square(){
        cout << "Se destruye cuadrado" << endl;
    }
    void draw(){
        for(int i = 0; i < this -> lado; i++){
            for(int i = 0; i < this -> lado; i++)
                cout << " * ";
            cout << "" << endl;
        }
    }
};