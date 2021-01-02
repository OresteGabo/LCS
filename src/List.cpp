#include "List.h"

List::List():head{nullptr}
{
    //ctor
}

List::~List(){
    Node* cr=head;
    while(cr){
        Node* tmp=cr->next;
        delete cr;
        cr=tmp;
    }
}
List::List(const List& l):head{nullptr}{
    Node* cr=l.head,*prevC;
    while(cr){
        Node* nc=new Node(cr->data);
        if(head==nullptr){
            head=nc;
        }
        else{
            prevC->next=nc;
        }
        prevC=nc;
        cr=cr->next;
    }
}
//ordre croissant
void List::inserer(double a){
    Node *nc=new Node(a);
    if(head==nullptr){
        head=nc;
        return;
    }
    if (head != nullptr && head->data>a){
        nc->next=head;
        head=nc;
        return;
    }

    Node*cr=head,*prevC=nullptr;
    while(cr!=nullptr && cr->data<nc->data){
        prevC=cr;
        cr=cr->next;
    }
    prevC->next=nc;
    nc->next=cr;
}
void List::supprimer(double a){
    if(head==nullptr or head->data>a)return;
    if(a==head->data){
        Node* tmp=head->next;
        delete head;
        head=tmp;
        return;
    }
    Node* cr=head->next,*prevC=head;
    while(cr and cr->data<a){
        prevC=cr;
        cr=cr->next;
    }
    if(cr && cr->data==a){
        prevC->next=cr->next;
        delete cr;
    }

}
int List::taille()const{
    Node* cr=head;
    int x=0;
    while(cr){
      x++;
    }
    return x;
}
bool List::operator==(const List& l)const{
    if( &l== this)return true;
    Node* c1=head,*c2=l.head;
    while(c1 and c2 && c1->data==c2->data){
        c1=c1->next;
        c2=c2->next;
    }
    return (!c1 and !c2) ? true: false;
}
List& List::operator=(const List&){

}
void List::inverser(){
    Node* cr=head,*nn=head;
    head=nullptr;
    while(cr->next){

    }
}

void List::fusion(const List&){}
Node* List::operator[](int){}
ostream& operator<<(ostream& os,const List&){}
void List::display()const{
    Node* cr=head;
    cout<<"[";
    if(cr){
        cout<<cr->data;
        cr=cr->next;
    }
    while(cr){
        cout<<","<<cr->data;
        cr=cr->next;
    }
    cout<<"]"<<endl;
    std::cout<<std::endl<<"______________end of list___________________\n";
}
