#include "pch.h"
#include "iostream"
using namespace std;

// int main(){

//     cout << "Voulez vous créer un cube ou un rectangle ? (c/r) " ;
//     string answer;
//     cin >> answer;
//     if(answer == "c"){
//         Cube cube(4);
//         cout << cube.afficheInfo() << endl;
//         cout << "Perimetre du cube : " << cube.getPerimetre() << endl;
//         cout << "Aire du cube : " << cube.getAire() << endl;
//     } else if(answer == "r"){
//         Rectangle rect(10, 5);
//         cout << rect.afficheInfo() << endl;
//         cout << "Perimetre du rectangle : " << rect.getPerimetre() << endl;
//         cout << "Aire du rectangle : " << rect.getAire() << endl;
//         cout << endl;
//     }
//     else {
//         return 0;
//     }
//     return 0;
// }
int main(){
    Stock s;
    Objet2D* r = new Rectangle(10,5);
    Objet2D* c = new Carre(4);
    s.addAtHead(c);
    s.addAtTail(r);
    s.addAtHead(c);
    s.afficherInfos();
    s.remAtIndex(2);
    s.afficherInfos();



    return 0;
}