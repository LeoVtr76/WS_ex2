#include "pch.h"
using namespace std;


Cube::Cube() : Rectangle(){}
Cube::Cube(int tcote) : Rectangle(tcote, tcote){}
int Cube::getCote(){
    return dim1;
}
int Cube::getPerimetre(){
    return 12 * dim1;
}
int Cube::getAire(){
    return 6 * dim1 * dim1;
}
string Cube::afficheInfo(){
    return "Cube : cote = " + to_string(dim1);
}   
