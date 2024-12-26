// Polymorphisme.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>


//Garder une norme de langage dans tout le code


class Polygone
{
public:
virtual void draw()
    {
        std::cout << "Polygone dessine" << std::endl;
    }
};



class Triangle : public Polygone
{
public:
    void draw() override
    {
        std::cout << "Trianlge dessine" << std::endl;
    }
};


class Carre : public Polygone
{
public:
    void draw() override
    {
        std::cout << "Carre dessine" << std::endl;
    }
};




int main()
{
    Polygone poly;
    Triangle tri;
    //poly.draw();
    //tri.draw();
    Polygone* ptr_to_poly = &tri; // classe mère a fille 
    // Error classe fille a mère
   /* Triangle* ptr = &poly     on ne peut pas pointer sur un polygone car un triangle est un polygone mais tout les polgone ne sont pas des trizngles   */
    ptr_to_poly->draw();
}
// allouer pointeur stack et heap pareil
/// les classes enfant écrivent sur la classe mère

