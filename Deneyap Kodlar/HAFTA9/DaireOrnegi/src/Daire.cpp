#include "Daire.h"
#include <iostream>
using namespace std;

float Daire::alan()
{
    return pi*yaricap*yaricap;
}

float Daire::cevre()
{
    return 2*pi*yaricap;
}

void Daire::deger_atama(float r, float PI)
{
    yaricap=r;
    pi=PI;
}

