#include "pch.h"
using namespace std;


Carre::Carre() : Rectangle(){}
Carre::Carre(int tcote) : Rectangle(tcote, tcote){}
int Carre::getCote(){
    return dim1;
}
string Carre::afficheInfo(){
    return "Carré : cote = " + to_string(dim1);
}   
