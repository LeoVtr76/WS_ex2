#pragma once
#include "pch.h"
#include <vector>

class Stock{
    private : 
        std::vector<Objet2D*> objets;
        struct list{
            Objet2D* data;
            list* next;
            list(Objet2D* obj, list* next);
        };
        list* head;
        list* tail;
        
    public :
        Stock();
        ~Stock();
        void addAtHead(Objet2D* obj);
        void addAtTail(Objet2D* obj);
        void addAtIndex(Objet2D* obj,unsigned int id);
        void remAtHead();
        void remAtTail();
        void remAtIndex(unsigned int id);
        void afficherInfos();
};