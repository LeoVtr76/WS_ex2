#include "pch.h"
#include <iostream>
using namespace std;

Stock::Stock() : head(nullptr), tail(nullptr){}
void Stock::addAtHead(Objet2D* obj){
    list* l = new list(obj, head);
    if(head!=nullptr){
        l->next = head;
        l->data = obj;
        head = l;
    }
}
void Stock::addAtTail(Objet2D* obj){
    list* l = new list(obj, nullptr);
    if(tail != nullptr){
        tail->next = l;
        tail = l;
    }
    else {
        head = l;
        tail = l;
    }
    
}
void Stock::addAtIndex(Objet2D* obj, unsigned int id){
    if(id >= 0){
        if(id == 0){
            addAtHead(obj);
            return;
        }
        list* temp = head;
        unsigned int i = 0;
        while(temp != nullptr && i < id-1){
            temp = temp->next;
            i++;
        }
        if(temp !=nullptr){
            list* l = new list(obj, temp->next);
            temp->next = l;
            if(l->next == nullptr){
                tail = l;
            }
        }
    }
    return;
}
void Stock::remAtHead(){

}
void Stock::remAtIndex(unsigned int id){
    if(id > 0){
        if(id == 0){
            if(head !=nullptr){
                list* temp = head;
                head = head->next;
                delete temp->data;
                delete temp;
                if(head == nullptr){
                    tail = nullptr;
                }
            }
            return;
        }
        list* temp = head;
        unsigned int i = 0;
        while (temp !=nullptr && i < id-1){
            temp = temp->next;
            i++;
        }
        if(temp !=nullptr && temp->next !=nullptr){
            list* l = temp->next;
            temp->next = temp->next->next;
            delete temp->data;
            delete temp;
            if(temp->next == nullptr){
                tail = temp;
            }
        }
    }
}
void Stock::afficherInfos(){
    list* temp = head;
    while (temp !=nullptr){
        cout << temp->data->afficheInfo() << endl;
        temp = temp->next;
    }
}
Stock::list::list(Objet2D* obj, list* next) : data(obj), next(next){}
Stock::~Stock(){
    list* temp = head;
    while(temp != nullptr){
        list* temp2 = temp->next;
        delete temp->data;
        delete temp;
        temp = temp2;

    }
}