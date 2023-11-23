#include "pch.h"
using namespace std;

class Carre : public Rectangle{
    public :
        Carre();
        Carre(int tcote);
        int getCote();
        string afficheInfo() override;
};