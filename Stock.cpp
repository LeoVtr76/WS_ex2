#include "pch.h"
#include <iostream>
using namespace std;

Stock::Stock() : head(nullptr), tail(nullptr){}
void Stock::addAtHead(Objet2D* obj){
    if(head == nullptr){
        head = obj;
        tail = obj;
    } else {
        obj->setSuivant(head);
        head = obj;
    }
}
void Stock::addAtTail(Objet2D *obj){
    if (tail==nullptr){
        head = obj;
        tail = obj;
    } else {
        obj->setSuivant(obj);
        tail = obj;
    }
}
void Stock::afficherInfos(){
    Objet2D* objet = head;
    while (objet !=nullptr){
        cout << objet->afficheInfo() << endl;
        objet = objet->getSuivant();
    }
}
Stock::~Stock(){
    Objet2D* objet = head;
    while(objet != nullptr){
        Objet2D* objet2 = objet;
        objet2 = objet2->getSuivant();
        delete objet2;
    }
}