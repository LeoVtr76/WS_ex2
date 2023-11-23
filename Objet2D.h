#include "pch.h"
using namespace std;


class Objet2D{
    protected :
        int dim1;
        int dim2;
    public :
        Objet2D();
        Objet2D(int tdim1, int tdim2);
        virtual int getPerimetre() = 0;
        virtual int getAire() = 0;
        virtual string afficheInfo() = 0;
};