#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class Triangle:public Shape{
public:
    Triangle(){
        cout << "Se crea triangulo" << endl << endl;
    }
    ~Triangle(){
        cout << "Se destruye triangulo" << endl;
    }
    void draw(){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < i; j++)
                cout << " * ";
            cout << "" << endl;
        }
    }
};