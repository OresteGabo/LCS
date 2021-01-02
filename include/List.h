#ifndef LIST_H
#define LIST_H
#include"Node.h"
#include<iostream>
class Node;
using std::ostream;
using std::cout;
using std::endl;
class List
{
    public:
        List();
        List(const List&);
        ~List();
        void inserer(double);
        void supprimer(double);
        int taille()const;
        bool operator==(const List&)const;
        List& operator=(const List&);
        void inverser();
        void fusion(const List&);
        Node* operator[](int);
        friend ostream& operator<<(ostream& os,const List&);
        void display()const;
    protected:

    private:
        Node* head;
};

#endif // LIST_H
