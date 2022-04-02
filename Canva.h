#pragma once
#include "Shape.h"

class Canva{
public:
    void printShape(Shape* s){
        s->draw();
    }
};