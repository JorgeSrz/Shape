#pragma once
#include <iostream>

class Shape{
private:
    int variablePrivada = 5;
protected:
    int lado = 10;
public:
    int variablePublica = 5;
    virtual void draw(){}
};