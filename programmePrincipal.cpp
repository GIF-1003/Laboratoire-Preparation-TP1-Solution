/**
 * \file programmePrincipal.cpp
 * \brief programme principal à corriger
 * avant de compiler, configurer les options de compilation de manière à avoir 
 * tous les messages d'erreur de compilation y compris toutes les mises en garde:
 * dans les "Properties" du projet, C++ compiler,  Warning Level, More Warnings
 */
#include <iostream>
#include "fonctionsUtilitaires.h"
#include <array>

using namespace std;

int main ()
{
    cout << endl << "****bug_1 " << endl;
    bug_1();

    cout << endl << "****bug_2 " << endl;
    bug_2();

    cout << endl << "****bug_3 " << endl;
    bug_3();

    cout << endl << "****bug_4 " << endl;
    bug_4();

    cout << endl << "****bug_5 " << endl;
    bug_5(5);

    return 0;
}
