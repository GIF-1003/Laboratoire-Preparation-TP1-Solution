/**
 * \file fonctionsUtilitaires.cpp
 * à corriger
 */

#include "fonctionsUtilitaires.h"
#include <iostream>

using namespace std;

void bug_1()
{
    int age = 60;

    if (age >= 65);
        cout << "L'age est superieur ou egal a 65" << endl;
    else
        cout << "L'age est inferieur a 65" << endl;
}

void bug_2()
{
    int entier1; // déclarations
    int entier2;

    cout << "Entrer un premier entier" << endl; // affichage
    cin >> entier1; // lire un entier
    cout << "Entrer un second entier" << endl; // affichage
    cin >> entier2; // lire un entier
    somme = entier1 + entier2; // assignation de somme
    cout << "la Somme est " << somme << endl; // afficher somme
}

void bug_3()
{
    int total = 0;

    for (int x = 0; x <= 10; x++)
        if (x % 2 == 0)
        {
            cout << x << " pair" << endl;
        }
    total += x;

    cout << "Le programme termine et le total est " << total << endl;
}

void bug_4()
{
    int total; // somme des notes
    int notesSaisies = 0; // compteur de notes saisies
    const int NOMBRE_NOTES_A_SAISIR = 5;
    int maximum;

    while (notesSaisies < NOMBRE_NOTES_A_SAISIR)
    {
        cout << "Entrer une note: ";
        int note; // une note
        cin >> note; // saisie d'une note
        total = total + note;
        notesSaisies = notesSaisies + 1; // incrémentation du compteur
    }
    int moyenne; // moyenne des notes
    moyenne = total / NOMBRE_NOTES_A_SAISIR;
    cout << "La moyenne de la classe est " << moyenne << endl;
}

void bug_5()
{
    int y = 1;

    while ( y > 0 ) 
    {
        cout << y << endl;
        ++y;
    }
}
