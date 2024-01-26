/** 
 * \file   programmePrincipal.cpp
 * \brief échange valeurs
 */

#include "fonctionsUtilitaires.h"
#include <iostream>
using namespace std;

int main()
{
    int n = 10, p = 20;
    cout << "-- avant appel   : " << n << " " << p << endl;
    echange (n, p);
    cout << "-- apres appel   : " << n << " " << p << endl;

    return 0;
}
