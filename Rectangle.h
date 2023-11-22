#include "pch.h"
using namespace std;


class Rectangle : public Objet2D{
    public :
        Rectangle();
        Rectangle(int tdim1, int tdim2);
        int getLongueur();
        int getLargeur();
        int getPerimetre() override;
        int getAire() override;
        string afficheInfo() override;
};