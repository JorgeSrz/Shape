#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class EqTriangle:public Shape{
public:
    EqTriangle(){
        cout << "Se crea triangulo" << endl << endl;
    }
    ~EqTriangle(){
        cout << "Se destruye triangulo" << endl;
    }
    void draw(){
        int a = 5;
        int b = 0;
        for(int i = 0; i < 5; i++) {
            for(int j = 1; j <= a; j++)
                cout << "  ";
            a--;
            for(int j = 0; j <= b; j++)
                cout << " *";
            b+=2;
            cout << "" << endl;
        }
    }
};