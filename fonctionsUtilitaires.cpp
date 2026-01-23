/**
 * \file fonctionsUtilitaires.cpp
 */

#include "fonctionsUtilitaires.h"
#include <iostream>

using namespace std;

void bug_1()
{
    int age{60};

    if (age >= 65)
    {
        cout << "L'âge est supérieur ou égal à 65.\n";
    }
    else
    {
        cout << "L'âge est inférieur à 65.\n";
    }
}

void bug_2()
{
    cout << "Entrer un premier entier:\n";
    int entier1; // déclaration
    cin >> entier1; // lire un entier

    cout << "Entrer un second entier:\n";
    int entier2; // déclaration
    cin >> entier2; // lire un entier

    int somme{entier1 + entier2}; // déclaration et initialisation de somme
    cout << "La somme est " << somme << ".\n";
}

void bug_3()
{
    int total{0};

    for (int x{0}; x <= 10; ++x)
    {
        if (x % 2 == 0)
        {
            cout << x << " pair\n";
        }
        total += x;
    }
    
    cout << "Le programme termine et le total est " << total << ".\n";
}

void bug_4()
{
    int total{0}; // somme des notes
    int notesSaisies{0}; // compteur de notes saisies
    const int NOMBRE_NOTES_A_SAISIR{5};

    while (notesSaisies < NOMBRE_NOTES_A_SAISIR)
    {
        cout << "Entrer une note: ";
        int note; // une note
        cin >> note; // saisie d'une note
        total = total + note;
        // total += note; // syntaxe alternative
        notesSaisies = notesSaisies + 1; // incrémentation du compteur
        // ++notesSaisies; // syntaxe alternative
    }
    int moyenne{total / NOMBRE_NOTES_A_SAISIR}; // moyenne des notes
    cout << "La moyenne de la classe est " << moyenne << ".\n";
}

void bug_5(int p_arret)
{
    int y = 1;

    while (y < p_arret) 
    {
        cout << y << "\n";
        ++y;
    }
}
