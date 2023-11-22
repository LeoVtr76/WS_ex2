#pragma once
#include "pch.h"

class Stock{
    private : 
        Objet2D* head;
        Objet2D* tail;
    public :
        Stock();
        ~Stock();
        void addAtHead(Objet2D* obj);
        void addAtTail(Objet2D* obj);
        void afficherInfos();
        
};