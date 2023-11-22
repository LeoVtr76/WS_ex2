#include "pch.h"
using namespace std;

class Cube : public Rectangle{
    public :
        Cube();
        Cube(int tcote);
        int getCote();
        int getPerimetre() override;
        int getAire() override;
        string afficheInfo() override;
};