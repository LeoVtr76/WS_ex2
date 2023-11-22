#include "pch.h"
using namespace std;


Objet2D::Objet2D() : dim1(0), dim2(0) {}
Objet2D::Objet2D(int tdim1, int tdim2) : dim1(tdim1), dim2(tdim2){}
void Objet2D::setSuivant(Objet2D *obj){
    suivant = obj;
}
Objet2D* Objet2D::getSuivant() const {
    return suivant;
}