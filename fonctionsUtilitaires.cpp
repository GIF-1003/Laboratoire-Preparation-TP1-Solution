/**
 * \file fonctionsUtilitaires.cpp
 */
#include "fonctionsUtilitaires.h"
#include <iostream>
using namespace std;

void echange(int a, int b)
{
    int c;
    cout << "-- debut echange : " << a << " " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "-- fin echange   : " << a << " " << b << endl;
}
