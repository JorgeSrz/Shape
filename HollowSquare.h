#pragma once
#include <iostream>
#include "Shape.h"

using namespace std;

class HollowSquare:public Shape{
public:
    HollowSquare(){
        cout << "Se crea cuadrado" << endl << endl;
    }
    ~HollowSquare(){
        cout << "Se destruye cuadrado" << endl;
    }
    void draw(){
        for(int i = 0; i < this->lado; i++) {
            for(int j = 0; j < this->lado; j++) {
                if(i == 0 || i == (lado - 1) || j == 0 || j == (lado - 1))
                    cout << " * ";
                else
                    cout << "   ";
            }
            cout << "" << endl;
        }
    }
};